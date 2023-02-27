#include <stdio.h>

int main()
{
    int h, y, x;
    double r;

    scanf("%d", &h);

    if(h%3 != 0)
    {
        y = h%3;
        r = (h/3)*10 + (5*y);
    }
    else if(h%3 == 0)
    {
        r = (h/3)*10;
    }

    printf("O VALOR A PAGAR E = %.2lf\n", r);

    return 0;
}