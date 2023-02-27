#include <stdio.h>

#define k 100
#define m 100

int main()
{
    int Mat[m][k];
    int ad, bc;
    double A;
    int i, j;

    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            scanf("%d", &Mat[i][j]);
        }
      
    }
    A = Mat[0][0] * Mat[1][1] - Mat[0][1] * Mat[1][0];
    printf("%.2lf\n", A);

    return 0;
}