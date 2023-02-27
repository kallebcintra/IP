#include <stdio.h>

void Raiz(double n, float e)
{
    double x = n;
    double y = 1;
    float z;

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
        z = (n-(x*x));
        if(z < 0) z = -z;
        printf("r: %.9lf, err: %.9f\n", x, z);
    }

}
 
int main()
{
    double n;
    float e;

    scanf("%lf %f", &n, &e);

    Raiz(n, e);

    return 0;
}
