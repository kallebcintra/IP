#include <stdio.h>

int main()
{
    int t1, t2;
    int n;
    int final = 0;

    scanf("%d", &n);
    if(n<2)
    {
        printf("Campeonato invalido!\n");
        return 0;
    }

    for(t1 = 1; t1 <= n-1; t1++)
    {
        for(t2 = t1+1; t2 <= n; t2++)
        {
            final++;
            printf("Final %d: Time%d X Time%d\n", final, t1, t2);
        }
    }

    return 0;
}