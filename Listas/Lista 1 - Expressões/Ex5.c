#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;
    float d;
    float X;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    X = (a*d) - (b*c);

    printf("O VALOR DO DETERMINANTE E = %.2f\n", X);

    return 0;
}