#include <stdio.h>

int main()
{
    int A[10][10];
    int l , c;
    int i, j;
    int min, max;
    double qtdmin = 0, qtdmax = 0;
    double pmin, pmax;

    scanf("%d %d", &l, &c);
    if(l < 2 || l > 1000 || c < 2 || c > 1000){
        printf("Numero invalido!");
        return 0;
    }

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    min = A[0][0];
    max = A[0][0];

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(A[i][j] < min) min = A[i][j];
            if(A[i][j] > max) max = A[i][j];
        }
    }

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(A[i][j] == min) qtdmin++;
            if(A[i][j] == max) qtdmax++;
        }
    }

    pmin = (qtdmin*100)/(l*c);
    pmax = (qtdmax*100)/(l*c);

    printf("%d %.2lf%%\n%d %.2lf%%", min, pmin, max, pmax);

    return 0;
}