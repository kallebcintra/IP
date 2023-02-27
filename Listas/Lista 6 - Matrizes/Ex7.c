// Doesn't Work
#include <stdio.h>

int main()
{
    int Mat[10][10];
    int i, j, temp = 0;
    int x, z;
    int r = 0;
    int y;

    for(x = 0; x < 6; x++)
    {
        for(z = 0; z < 6; z++)
        {
            scanf("%d", &Mat[x][z]);
        }
    }

    temp = Mat[0][0] + Mat[0][1] + Mat[0][2] + Mat[1][1] + Mat[2][0] + Mat[2][1] + Mat[2][2];

    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 6; j++)
        {
            r = Mat[i][j] + Mat[i][j+1] + Mat[i][j+2] + Mat[i+1][j+1] + Mat[i+2][j] + Mat[i+2][j+1] + Mat[i+2][j+2];
            if(r > temp) y = r;
        }
    }

    printf("%d\n", y);

    return 0;
}