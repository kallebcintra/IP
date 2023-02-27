#include <stdio.h>

int main()
{
    double x, y, m; 

    scanf("%lf%lf", &x, &y);

    m = (x+y)/2;

    printf("%.3lf\n", m);

    return 0;
}