#include <stdio.h>

int main()
{
    int x, y, n, i;

    scanf("%d %d", &x, &y);

    if(x%2 != 0)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
        return 0;
    }

    n = x-2;
    for(i = x; i <= (x+2*y); i++)
    {
        n++;

        if(n%2 == 0)
        {
            printf("%d ", n);
        }
    }

    return 0;
}