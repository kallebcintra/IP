#include <stdio.h>

#define k 1000

int maiorValor(int *V, int *n);
int menorValor(int *V, int *n);


int main()
{
    int V[k];
    int n;
    int i, j, l;

    int Ma, Me;

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

    for(i = 0; i < n; i++)
    {
        printf("%d ", V[i]);
    }
    printf("\n");

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d ", V[j]);
    }
    printf("\n");

    Ma = maiorValor(V, &n);
    Me = menorValor(V, &n);

    printf("%d\n%d\n", Ma, Me);

    return 0;
}

int maiorValor(int *V, int *n)
{
    int x;
    int y = *n;
    int maior;

    maior = V[0];
    for (x = 1; x < y; x++) 
    {
        if (V[x] > maior) 
        {
            maior = V[x];  
        } 
    }

    return maior;
}

int menorValor(int *V, int *n)
{
    int x;
    int y = *n;
    int menor;

    menor = V[0];
    for (x = 1; x < y; x++) 
    {
        if (V[x] < menor) 
        {
            menor = V[x];  
        } 
    }

    return menor;
}