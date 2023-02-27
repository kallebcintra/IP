#include <stdio.h>

#define z 1000

int main()
{
    int V[z];
    int n, i, k ,c, x, r;

    while(n < 1 || n > 1000)
    {
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d", &V[i]);
    }

    scanf("%d", &k);

    c = 0;
    for(x = 0; x < n; x++)
    {
        V[x];
        if(V[x] >= k)
        {
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}