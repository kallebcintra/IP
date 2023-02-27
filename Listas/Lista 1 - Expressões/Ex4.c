#include <stdio.h>

int main()
{
    float a, b, c;
    float X;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    X = (b*b) - 4*a*c;

    printf("O VALOR DE DELTA E = %.2f\n", X);


    return 0;
}