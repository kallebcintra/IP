#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int x, y;

    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 > 9 || n2 > 9 || n3 > 9)
    {
        printf("DIGITO INVALIDO\n");
        return 0;
    }

    x = n1*100 + n2*10 + n3;
    y = x*x;

    printf("%d, %d", x, y);

    return 0;
}