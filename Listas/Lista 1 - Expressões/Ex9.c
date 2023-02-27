#include <stdio.h>

int main()
{
    double n, P, nn;

    scanf("%lf", &n);

    P = 10;
    nn =  ((int)((n*P)+0.5))/P;
    printf("%lf\n", nn);

    P = 100;
    nn =  ((int)((n*P)+0.5))/P;
    printf("%lf\n", nn);

    P = 1000;
    nn =  ((int)((n*P)+0.5))/P;
    printf("%lf\n", nn);

    return 0;
}