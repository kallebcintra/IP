#include <stdio.h>

#define k 10000

int main()
{
    int nota[k];
    int n;
    int i, j, l;
    int maior, local;
    int contador = 0, last = 0;

    scanf("%d%*c", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%*c", &nota[i]);
    }
    last = nota[n-1];

    maior = nota[0]; 
  
    for (j = 1; j < n; j++) 
    {
        if (nota[j] > maior) 
        {
            maior = nota[j]; 
            local = j; 
        } 
    }

    for(l = 0; l < n; l++)
    {
        if(nota[l] == last)
        {
            contador++;
        }
    }

    printf("Nota %d, %d vezes\n", last, contador);
    printf("Nota %d, indice %d\n", maior, local);

    return 0;
}