#include <stdio.h>

int main()
{
    int n, i, y, x;

    scanf("%d", &n);

    if(n<=5 || n>=2000)
    {
        printf("N DEVE ESTAR ENTRE 5 E 2000\n");
        return 0;
    }

    y = 0;
    for(i = 0; i < n; i++)
    {
        y++;
        if(y%2 == 0)
        {
            x = y*y;
            printf("%d^2 = %d\n", y, x);
        }
    }

    return 0;
}