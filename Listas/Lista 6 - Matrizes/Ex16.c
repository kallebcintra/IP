#include <stdio.h>

int main()
{
    int Log[10][10], Des[10][10];
    int a00, a01, a10, a11;
    int dl, dd;
    int i, j;
    int x = 0;

    scanf("%d", &dl);
    if(dl < 1 || dl > 10) return 0;

    for(i = 0; i < dl; i++)
    {
        for(j = 0; j < dl; j++)
        {
            scanf("%d", &Log[i][j]);
        }
    }

    scanf("%d", &dd);
    if(dd < 1 || dd > 320) return 0;

    for(i = 0; i < dd; i++)
    {
        for(j = 0; j < dd; j++)
        {
            scanf("%d", &Des[i][j]);
            if(Des[i][j] < 0 || Des[i][j] > 255) return 0;
        }
    }

    for(i = 0; i < dl; i++)
    {
        for(j = 0; j < dl; j++)
        {
            if(i == 0 && j == 0) a00 = Log[i][j];
            if(i == 0 && j == 1) a01 = Log[i][j];
            if(i == 1 && j == 0) a10 = Log[i][j];
            if(i == 1 && j == 1) a11 = Log[i][j];
        }
    }

    for(i = 0; i < dd; i++)
    {
        for(j = 0; j < dd; j++)
        {
            if(Des[i][j] == a00 && Des[i][j+1] == a01 && Des[i+1][j] == a10 && Des[i+1][j+1] == a11) x = 1;
        }
    }

    if(x == 1) printf("sim");
    else if(x == 0) printf("nao");

    return 0;
}