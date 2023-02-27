// Doesn't Work
#include <stdio.h>

#define k 24443

//void sequenciaEspelho(int E, int B);

int main()
{
    int V[k];
    int n;
    int B, E;
    int i, x, r;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &B, &E);
        if(B < 1 || B > E || E > 12221)
        {
            printf("Numero invalido!\n");
            return 0;
        }

        V[0] = B;
        for(r = 0; r <= E; r++)
        {
            printf("%d ", V[r]);
        }

        V[r+1] = E;
        for(x = i - 1; x >= 0; x--)
        {
            printf("%d ", V[x]);
        }
        printf("\n");
    }

    return 0;
}

/**for(x = i - 1; x >= 0; x--)
    {
        printf("%d ", V[x]);
    }

for(r = 0; r < n; r++)
    {
        printf("%d ", V[r]);
    }*/

/**void sequenciaEspelho(int E, int B)
{
    int x, y, z;

    for(x = E; x <= B; x++)
    {
        printf("%d", x);
        printf("oi");
    }

    for(y = B; y <= E; y--)
    {
        printf("%d", y);
        printf("ola");
    }
}*/