//doesn't work
#include <stdio.h>

int rowcheck(int a[9][9]);
int colcheck(int a[9][9]);
int cubecheck(int a[9][9]);

int main()
{
    int a[9][9];
    int i, j;

    //

    if(rowcheck(a) == 1 && colcheck(a) == 1 && cubecheck(a) == 1) printf("valido\n");
    else printf("invalido\n");

    return 0;
}

int rowcheck(int a[9][9])
{
    int c[10] = {0};
    int i, j, k;

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            c[a[i][j]]++;
        }
        for(k = 1; k <= 9; k++)
        {
            if(c[k] != 1) return 0;
        }
        for(k = 1; k <= 9; k++)
        {
            c[k] = 0;
        }
    }
    return 1;
}

int colcheck(int a[9][9])
{
    int c[10] = {0};
    int i, j, k;

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            c[a[i][j]]++;
        }
        for(k = 1; k <= 9; k++)
        {
            if(c[k] != 1) return 0;
        }
        for(k = 1; k <= 9; k++)
        {
            c[k] = 0;
        }
    }
    return 1;
}

int cubecheck(int a[9][9])
{
    int c[10] = {0}, count = 0;
    int m, b, i, j, k;

    for(m = 0; m < 9; m += 3)
    {
        for(b = 0; b < 9; b += 3)
        {
            for(i = m; i < m+3; i++)
            {
                for(j = b; j < b+3; j++)
                {
                    c[a[i][j]]++;
                }
            }
            count++;
            for(k = 1; k <= 9; k++)
                if(c[k] != 1)
                {
                    return 0;
                }
                for(k = 1; k <= 9; k++)
                c[k] = 0;
        }
    }

    return 1;
}