#include <stdio.h>

int main()
{
    float a, b, c, p, at;

    scanf("%f %f %f", &a, &b, &c);

    p = a + b + c;
    at = (a+b)*c /2;

    if((b-c)<a && (b-c)<b+c && (a-c)<b && (a-c)<a+c && (a-b)<c && (a-b)<a+b) printf("Perimetro = %.1lf\n", p);
    else printf("Area = %.1lf\n", at);

    return 0;
}