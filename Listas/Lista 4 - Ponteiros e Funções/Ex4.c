// Doesn't Work
#include <stdio.h>

void somaDivisores( int n );

int main()
{
    int n;
    int x;
    int sd;

    scanf("%d", &n);
    somaDivisores(n);

    return 0;
}

void somaDivisores( int n )
{
    int x = 0, i, j, d = 0;

    printf("%d = ", n);

    for(i = 1; i < n; i++)
    {
        d++;
        if(d == 1) printf("%d ", d);
        if(n%d == 0 && d != 1) printf("+ %d ", i);
        if (n%d == 0) x += d;
    }
    if(x == n && x != 0) printf("= %d (NUMERO PERFEITO)\n", n);
    else if(x != n && x != 0) printf("= %d (NUMERO NAO E PERFEITO)\n", x);
    else printf("(NUMERO NAO E PERFEITO)\n");
}

