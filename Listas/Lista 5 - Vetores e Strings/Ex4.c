#include <stdio.h>

#define k 4999

int main()
{
    int V[k];
    int n, i, x;
    int temp;

    scanf("%d", &n);

    if(n > k)
    {
        printf("tamanho invalido\n");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d", &V[i]);
    }

    for(x = i - 1; x >= 0; x--)
    {
        printf("%d ", V[x]);
    }

    return 0;
}