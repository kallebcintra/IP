#include <stdio.h>

int main()
{
    int n;
    int x, y;
    int k;

    scanf("%d", &n);

    if(n <= 2 || n > 12)
    {
        printf("Combinacao impossivel\n");
        return 0;
    }

    k = 0;
    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            if(x + y == n && x < 7 && y < 7)
            {
                printf("D1: %d, D2: %d\n", x, y);
                k++;
            }
        }
    }

    if(k > 1) printf("Ha %d possibilidades\n", k);
    else printf("Ha %d possibilidade\n", k);

    return 0;
}