#include <stdio.h>

int main()
{
    int a1, r, n, i, x, z;
    int St;

    scanf("%d %d %d", &a1, &r, &n);

    x = -1;
    for(i = 0; i < n; i++)
    {
        x++;
        z = a1 + (x*r); 
    }

    St = (a1 + z)*n /2;

    printf("%d\n", St);

    return 0;
}