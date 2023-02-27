#include <stdio.h>

int main()
{
    int n1, n2, n3;
    char x, y, z;
    int maior, meio, menor;
    int a1, a2, a3;

    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%c%c%c", &x, &y, &z);

    maior = n1;

    if(n1 > n2 && n1 > n3) maior = n1;
    else if(n2 > n1 && n2 > n3) maior = n2;
    else if(n3 > n2 && n3 > n1) maior = n3;

    if(n1 > n2 && n1 < n3 || n1 > n3 && n1 < n2) meio = n1;
    else if(n2 > n1 && n2 < n3 || n2 > n3 && n2 < n1) meio = n2;
    else if(n3 > n1 && n3 < n2 || n3 > n2 && n3 < n1) meio = n3;

    if(n1 < n2 && n1 < n3) menor = n1;
    else if(n2 < n1 && n2 < n3) menor = n2;
    else if(n3 < n2 && n3 < n1) menor = n3;
    
    if(x == 'A') a1 = menor;
    else if(x == 'B') a1 = meio;
    else if(x == 'C') a1 = maior;

    if(y == 'A') a2 = menor;
    else if(y == 'B') a2 = meio;
    else if(y == 'C') a2 = maior;

    if(z == 'A') a3 = menor;
    else if(z == 'B') a3 = meio;
    else if(z == 'C') a3 = maior;

    printf("%d %d %d\n", a1, a2, a3);

    return 0;
}