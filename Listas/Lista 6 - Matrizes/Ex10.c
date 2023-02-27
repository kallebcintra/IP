#include <stdio.h>

int main() 
{
    int a[10][10], transpose[10][10], n, i, j;
    int ta[10][10];
    int Mat[10][10];
    int t;

    scanf("%d", &n);
    if(n < 2 || n > 1000){
        printf("Numero invalido!");
        return 0;
    }

    for (i = 0; i < n; ++i)
    for (j = 0; j < n; ++j) {
      scanf("%d", &a[i][j]);
    }

    for (i = 0; i < n; ++i)
    for (j = 0; j < n; ++j) {
      transpose[j][i] = a[i][j];
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {

            if(i==j) t += a[i][j]; 
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            ta[i][j] = a[i][j]*t;
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            Mat[i][j] = ta[i][j] + transpose[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", Mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}