// Incompleto
#include <stdio.h>

int main()
{
    int m, n;
    int i, j, k;

    scanf("%d %d", &m, &n);

    for(i = 2; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 2 && j == 1) printf("(%d,%d)\n", i, j);
            if(i != j && i > j && j != i-1 && j != n) printf("(%d,%d)-", i, j);
            if(i != j && i > j && j == i-1 || j == n) printf("(%d,%d)\n", i, j);
        }
    }

    return 0;
}
