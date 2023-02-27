#include <stdio.h>

int main()
{
    double m;
    double a;
    double t;
    double x, x2, y, z;

    scanf("%lf", &m);
    scanf("%lf", &a);
    scanf("%lf", &t);

    x = (a*t)*3.6;
    x2 = (a*t);
    y = a*(t*t)/2;
    z = m*1000*(x2*x2)/2;

    printf("VELOCIDADE = %.2lf\n", x);
    printf("ESPACO PERCORRIDO = %.2lf\n", y);
    printf("TRABALHO REALIZADO = %.2lf\n", z);

    return 0;
}