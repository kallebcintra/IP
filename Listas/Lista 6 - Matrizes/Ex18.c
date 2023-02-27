#include <stdio.h>

#define ROW 10
#define COL 10

int main()
{

    int Matrix[ROW][COL];
    int i, j, k, n, temp;

    scanf("%d", &n);
    if(n < 2 || n > 1000) return 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &Matrix[i][j]);
        }
    }

    for (j = 0; j < n; ++j) {
        for (i = 0; i < n; ++i) {
            for (k = i + 1; k < n; ++k) {
                if (Matrix[i][j] > Matrix[k][j]) {
                    temp = Matrix[i][j];
                    Matrix[i][j] = Matrix[k][j];
                    Matrix[k][j] = temp;
                }
            }
        }
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j)
            printf("%d ", Matrix[i][j]);
        printf("\n");
    }

    return 0;
}