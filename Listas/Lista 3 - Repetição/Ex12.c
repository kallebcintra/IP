#include <stdio.h>
// Really don't know
int main()
{
    int n, i;
    int msi = 0;
    int t;
    int x;
    int ant;

    scanf("%d", &n);

    if(n<=0)
    {
        printf("Número deve ser maior que zero\n");
        return 0;
    }

    scanf("%d", &ant);
    t = 1;

    for(i = 1; i < n; i++)
    {
        scanf("%d", &x);
        if(x == ant) t++;
        else t = 1;
        if(t > msi) msi = t;
    }

    printf("O comprimento do segmento de numeros iguais e: %d\n", msi);

}