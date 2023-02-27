#include <stdio.h>

#define pi 3.14159

int main()
{
    float r, h;
    double At, C;

    scanf("%f", &r);
    scanf("%f", &h); 

    At = 2*(pi*r*r) + 2*(pi*r*h);
    C = At*100;

    printf("O VALOR DO CUSTO E = %.2lf\n", C);

    return 0;
}