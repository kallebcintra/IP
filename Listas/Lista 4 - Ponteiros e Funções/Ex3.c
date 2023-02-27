#include <stdio.h>

void separaDigitos( int n, int * d1, int * d2, int * d3 );

int main()
{
    int n;
    int c, d, u;

    scanf("%d", &n);
    separaDigitos(n,&c,&d,&u);

    printf("%d%d%d\n", u, d, c);

    return 0;
}

void separaDigitos( int n, int * d1, int * d2, int * d3 )
{
    *d1 = n/100;
    *d2 = n%100/10;
    *d3 = n%10;
}

int geraNumeroInvertido( int n )
{
    int c, d, u;
    separaDigitos(n, &c, &d, &u);
    return u*100 + d*10 + c;
}