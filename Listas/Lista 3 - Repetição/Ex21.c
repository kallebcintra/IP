#include <stdio.h>

void separaDigito1( int num1, int * d1, int * d2, int * d3 );
void separaDigito2( int num2, int * d1, int * d2, int * d3 );
int geraNumeroInvertido1( int num1 );
int geraNumeroInvertido2( int num2 );

int main()
{
    int n;
    int num1, num2;
    int i;
    int c, d, u;
    int i1, i2;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &num1, &num2);
        separaDigito1(num1,&c,&d,&u);
        separaDigito2(num2,&c,&d,&u);
        i1 = geraNumeroInvertido1(num1);
        i2 = geraNumeroInvertido2(num2);
        if(i1 > i2) printf("%d\n", i1);
        if(i2 > i1) printf("%d\n", i2);
    }
}

void separaDigito1( int num1, int * d1, int * d2, int * d3 )
{
    *d1 = num1/100;
    *d2 = num1%100/10;
    *d3 = num1%10;
}

void separaDigito2( int num2, int * d1, int * d2, int * d3 )
{
    *d1 = num2/100;
    *d2 = num2%100/10;
    *d3 = num2%10;
}

int geraNumeroInvertido1( int num1 )
{
    int c, d, u;
    separaDigito1(num1,&c,&d,&u);
    return u*100 + d*10 + c;
}

int geraNumeroInvertido2( int num2 )
{
    int c, d, u;
    separaDigito1(num2,&c,&d,&u);
    return u*100 + d*10 + c;
}