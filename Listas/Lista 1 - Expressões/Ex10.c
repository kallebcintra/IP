#include <stdio.h>
#include <math.h>

int main()
{
    float l1, l2, l3;

    scanf("%f", &l1);
    scanf("%f", &l2);
    scanf("%f", &l3);

    double T = (l1+l2+l3)/2.0;
    double X = T*(T-l1)*(T-l2)*(T-l3);
    double A = sqrt(X);

    printf("A AREA DO TRIANGULO E = %.2lf\n", A);

    return 0;
}