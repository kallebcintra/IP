#include <stdio.h>

int main()
{
    int n, i;
    unsigned long int f=1;

    scanf("%d", &n);

    if(n<0)
    {
        printf("O NUMERO NAO PODE SER NEGATIVO\n");
        return 0;
    }

    for(i = n; i >= 1; i--)
    {
        f = f*i;
    }

    printf("%d! = %lu\n", n, f);

    return 0;
}