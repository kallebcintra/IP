#include <stdio.h>

#define MAXDIM 100

int main()
{
    int l, c;
    unsigned char A[MAXDIM][MAXDIM];
    int largura, altura;
    int k, x;

    scanf("%d %d %d %d", &altura, &largura, &k, &x);

    for(l = 0; l < altura; l++)
    {
        for(c = 0; c < largura; c++)
        {
            A[l][c] = 0;
        }
    }

    for(l = 0; l < altura; l++)
    {
        for(c = 0; c < k; c++)
        {
            A[l][c] = x;
            A[l][largura-c-1] = x;
        }
    }

    for(c = 0; c < largura; c++)
    {
        for(l = 0; l < k; l++)
        {
            A[l][c] = x;
            A[altura-1-l][c] = x;
        }
    }

    printf("P2\n");
    printf("%d %d\n", largura, altura);
    printf("255\n");

    for(l = 0; l < altura; l++)
    {
        for(c = 0; c < largura; c++)
        {
            printf("%d ", A[l][c]);
        }
        printf("\n");
    }

    return 0;
}