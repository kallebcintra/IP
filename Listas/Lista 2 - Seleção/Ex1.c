#include <stdio.h>

int main()
{
    double n1, n2, n3, x;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    x = (n1 + n2 + n3)/3;

    printf("MEDIA = %.2lf\n", x);

    if(x>=6)
    {
        printf("APROVADO\n");
    }
    else
    {
        printf("REPROVADO\n");
    }

    return 0;
}