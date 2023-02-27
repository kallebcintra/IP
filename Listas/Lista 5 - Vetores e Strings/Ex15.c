// Doesn't Work
#include <stdio.h>

#define k 1000

int menorDistancia(int *V, int T);


int main()
{
    int V[k];
    int T;
    int N;
    int i, j;
    unsigned int distancia = 0;

    scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        scanf("%d", &N);
        for(j = 0; j < N; j++)
        {
            scanf("%d", &V[j]);
            if(V[j] > 1000 || V[j] < -1000){
                printf("Numero invalido!\n");
                return 0;
            }
            distancia = menorDistancia(V, T);

            //printf("%d %d\n", distancia, N*N);
        }
        printf("%d %d\n", distancia, N*N);
    }

    return 0;
}

int menorDistancia(int *V, int T)
{
    int i, j;
    int temp;
    unsigned int dist;

    dist = V[1] - V[0];
    //if(dist < 0) dist = -dist;
    for(i = 0; i < T; i++)
    {
        for(j = i; j < T; j++)
        {
            if(dist < 0) dist = -dist;
            if(dist < V[i] - V[j]){
                dist = V[i] - V[j];
            }
        }
    }
    return dist;
}

