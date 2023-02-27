#include <stdio.h>

int main()
{
    int Mat[10][10];
    int n;
    int i, j, l, c;

    scanf("%d", &n);
    if(n > 1000 || n < 1){
        printf("Numero invalido!\n");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j  < n; j++)
        {
            scanf("%d", &Mat[i][j]);   
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i + j) == (n - 1))
            {
                printf("%d\n", Mat[i][j]);
            }
        }
    }

    return 0;
}