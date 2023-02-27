#include <stdio.h>
// Works
int main()
{
    float cf;
    float pd;
    float pi;
    float Z;

    scanf("%f", &cf);
    scanf("%f", &pd);
    scanf("%f", &pi);

    Z = cf + cf*pd/100 + cf*pi/100;

    printf("O VALOR DO CARRO E = %.2f\n", Z);

    return 0;
}