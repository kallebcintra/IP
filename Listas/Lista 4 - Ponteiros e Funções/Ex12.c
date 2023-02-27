// Incompleto
#include <stdio.h>



/**
* Função que calcula o valor de pi usando a série proposta por John Wallis
* @param n quantidade de termos da série
* @return o valor aproximado da constante pi
*/
double compute_pi( int n );

int main()
{
    double n;
    double x;

    scanf("%lf", &n);

    x = compute_pi(n);

    printf("%.12lf\n", x);

    return 0;
}

double compute_pi( int n )
{
    int i, j;

    for(i = 2; i < n; i++)
    {
        if(n%2 == 0) for(j = 1; j < n+1; j++)
        {
            //if()
        }
    }
}