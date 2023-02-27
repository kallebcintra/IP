// Incompleto
#include <stdio.h>

int main()
{
    int Mat[10][10];
    int d1, d2, d3, d4, d5, d6;
    int i, j;
    int n;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6; j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }

    scanf("%d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6; j++)
        {
            if(Mat[i][j] == d1);
        }
    }

    return 0;
}