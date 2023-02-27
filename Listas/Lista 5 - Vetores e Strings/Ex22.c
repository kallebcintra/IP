// Incompleto
#include <stdio.h>

#define k 5001

int main()
{
    int V[k];
    int n;
    int i, j, l, temp;
    int x = 0;

    scanf("%d", &n);
    if(n < 0 || n > 5000){
        printf("Numero invalido!\n");
        return 0;
    }

    temp = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &V[i]);
    }

    for(j = 0; j < n; j++)
    {
        for(l = j+1; l < n; l++)
        {
            if(V[l] == V[j]) temp++;
        }
    }

    x = n - 2*temp;
    if(x < 0) x = -x;

    printf("%d\n", x);
    
    return 0;
}