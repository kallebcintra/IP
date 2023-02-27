#include <stdio.h>

int main()
{
    float a, b, c, d, e, f;
    double X, W;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    W = (c-a*f/d)/(b-a*e/d);
    X = (f-e*W)/d;
    
    printf("O VALOR DE X E = %.2lf\n", X);
    printf("O VALOR DE Y E = %.2lf\n", W);

    return 0;
}