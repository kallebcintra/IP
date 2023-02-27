#include <stdio.h>
#include <math.h>

int next_power( int n, int p );

int main()
{
    int n, p;
    int r = 0;

    scanf("%d %d", &n, &p);

    printf("%d -> 2^%d = ", n, p);

    r = next_power(n, p);

    printf("%d\n", r);

    return 0;
}

int next_power( int n, int p )
{
    int i, j, x = 0;
    int temp = 0;

    temp = pow(2,p);
    for(i = 2; pow(i,p) < n; i++)
    {
        temp = pow(i,p);
    }

    return temp;
}

