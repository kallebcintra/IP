// Incompleto
#include <stdio.h>

int main()
{
    int i, n; 
    double k;
    double s;

    scanf("%d", &n);

    i = 0;
    while(i < n)
    {
        i++;
        k += (1/i);
        s += k;
    }
    //s += k;

    printf("%lf", s);

    return 0;
}