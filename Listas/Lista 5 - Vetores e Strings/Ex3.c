#include <stdio.h>

#define K 1000

int main()
{
    int V[K];
    int n, i, cd;

    scanf("%d", &n);

    if(n <= 1 || n > K)
    {
        printf("tamanho invalido\n");
        return 0;
    }

    cd = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &V[i]);

        if(V[i]%2 == 0)
        {
            printf("%d ", V[i]);
            cd++;
        }
    }
    printf("%d\n", cd);

    return 0;
}