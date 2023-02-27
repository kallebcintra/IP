// Incompleto
#include <stdio.h>

int main()
{
    int Mat[10][10];
    int i, j;
    int w, m;
    int a, b, c, d;
    int n;

    scanf("%d", &n);

    for(i = 0; i < n+1; i++)
    {
        for(j = 0; j < n+1; j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }

    a = Mat[0][0];
    b = Mat[0][n];
    c = Mat[n][0];
    d = Mat[n][n];

    /**for(i = 0; i < n+1; i++)
    {
        for(j = 0; j < n+1; j++)
        {
            for(w = 1; w <= 2; w++)
            {
                for(m = 1; m <= 2; m++)
                {
                    a = Mat[0][0];
                    b = Mat[0][1];
                    c = Mat[1][0];
                    d = Mat[1][1];
                }
            }
        }
    }*/

    return 0;
}