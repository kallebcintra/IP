#include <stdio.h>

int main()
{
    int n, i, x, y, z, r;

    scanf("%d", &n);

    y = 0;
    for(i = 1; i < 32; i++)
    {
        y++;
        x = n*y;
    }

    y = 0;
    for(i = 0; i < 32; i++)
    {
        y++;
        z = (2*n)*y;
    }

    r = x + z;

    printf("%d\n", r);

    return 0;
}