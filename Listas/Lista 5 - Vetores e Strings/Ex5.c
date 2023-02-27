#include <stdio.h>

#define k 4999

int main()
{
    int V[k];
    int n, i, r;

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

    for(r = 0; r < n; r++)
    {
        printf("%d ", V[r]);
    }

    return 0;
}