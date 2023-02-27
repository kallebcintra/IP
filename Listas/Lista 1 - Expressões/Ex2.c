#include <stdio.h>

int main()
{
    float f, p;
    float Y;
    double X;

    scanf("%f", &f);
    scanf("%f", &p);

    X = 5*(f - 32)/9; 
    Y = p*25.4;

    printf("O VALOR EM CELCIUS = %.2lf", X); 
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", Y);

    return 0;
}