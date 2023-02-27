#include <stdio.h>

int main()
{
    int n;
    int dm, m, c, d, u;

    scanf("%d", &n);

    if(n > 100000 || n < 10)
    {
        printf("NUMERO INVALIDO\n");
        return 0;
    }

    if(n > 10 && n < 100)
    {
        d = n/10;
        u = n%10;
        if(d == u) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }

    if(n > 99 && n < 1000)
    {
        c = n/100;
        d = n%100/10;
        u = n%10;
        if(c == u) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }

    if(n > 999 && n < 10000)
    {
        m = n/1000;
        c = n%1000/100;
        d = n%1000%100/10;
        u = n%1000%10;
        if(m == u && c == d) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }

    if(n > 9999 && n < 100000)
    {
        dm = n/10000;
        m = n%10000/1000;
        c = n%10000%1000/100;
        d = n%10000%1000%100/10;
        u = n%10000%1000%100%10;
        if(dm == u && m == d) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }

    return 0;
}