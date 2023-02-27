#include <stdio.h>

#define k 100
#define m 100

int main()
{
    int Mat[m][k];
    double a, d, b, c;
    double A;
    int i, j;

    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            scanf("%d", &Mat[i][j]);
        }
      
    }

    a = Mat[0][0] * Mat[0][0] + Mat[0][1] * Mat[1][0];
    b = Mat[0][0] * Mat[0][1] + Mat[0][1] * Mat[1][1];
    c = Mat[1][0] * Mat[0][0] + Mat[1][1] * Mat[1][0];
    d = Mat[1][0] * Mat[0][1] + Mat[1][1] * Mat[1][1];

    printf("%.3lf %.3lf\n%.3lf %.3lf", a, b, c, d);

    return 0;
}