#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d", &x);

    if(x < 1)
    {
        y = x;
        printf("Y = %d\n", y);
    }
    else if(x == 1)
    {
        y = 0;
        printf("Y = %d\n", y);
    }
    else
    {
        y = x*x;
        printf("Y = %d\n", y);
    }

    return 0;
}