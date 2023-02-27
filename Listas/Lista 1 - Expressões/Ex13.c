#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2;

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    float distX = x2 - x1;
    float distY = y2 - y1;
    float pitagoras = pow(distX,2) + pow(distY,2);
    float distancia = sqrt(pitagoras);

    printf("A DISTANCIA ENTRE A e B = %.2f\n", distancia);

    return 0;
}