#include <stdio.h>

int main()
{
    int n;
    int i;
    int a, b;

    scanf("%d", &n);

    for(a = 0; a < n; a++)
    {
        for(b = a; b < n; b++)
        {
            if(a*b == 1 || (a*b)%n == 1)
            {
                printf("(%d,%d)\n", a, b);
            }
        }
    }

    return 0;
}