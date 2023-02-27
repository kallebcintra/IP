// Incompleto (Not Done)
#include <stdio.h>

void separaDigito( int n , int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8);

int main()
{
    int n;
    int n1, n2, m1, m2, a1, a2, a3, a4;
    int ano;

    scanf("%d", &n);

    separaDigito(n, n1, n2, m1, m2, a1, a2, a3, a4);

    ano = a1*1000 + a2*100 + a3*10 + a4;

    if(n2 > 8 && m2 == 2 && ano%4 != 0)
    {
        printf("Data invalida!");
        return 0;
    }

    //if(m1 == 0 && )

    return 0;
}

void separaDigito( int n , int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8)
{
    d1 = n/10000000;
    d2 = n%10000000/1000000;
    d3 = n%1000000;
    d4 = n%1000000/100000;
    d5 = n%100000;
    d4 = n%100000/10000;
    d3 = n%10000;
    d2 = n%10000/1000;
    d1 = n%1000;
}