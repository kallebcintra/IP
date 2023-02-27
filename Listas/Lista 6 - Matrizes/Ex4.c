#include <stdio.h>

int main()
{
    int Mat[10][10];
    int l, c;
    int i, j;

    while(l > 10 || l <= 0 || c > 10 || c <= 0)
    {
        scanf("%d %d", &l, &c);
    }

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }

    for(i = 0; i < l; i++)
    {
        printf("linha %d: ", i+1);
        for(j = 0; j < c-1; j++)
        {
            printf("%d,", Mat[i][j]);
        }
        for(j = c-1; j < c; j++)
        {
            printf("%d", Mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}