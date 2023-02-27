#include <stdio.h>

int main()
{
    double S, x;

    scanf("%lf", &S);

    if(S<=300)
    {
        x = S + S*0.5;
        printf("SALARIO COM REAJUSTE = %.2lf\n", x);
    }
    else if(S>300)
    {
        x = S + S*0.3;
        printf("SALARIO COM REAJUSTE = %.2lf\n", x);
    }

    return 0;
}