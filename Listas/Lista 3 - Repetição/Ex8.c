#include <stdio.h>

int main()
{
    unsigned long int a, b;
    int anos;

    scanf("%lu", &a);
    scanf("%lu", &b);

    if(a>b) printf("b DEVE SER MAIOR QUE a\n");

    anos = 0;
    while(a<b)
    {
        a *= (1+0.03);
        b *= (1+0.015);
        anos++;
    }

    printf("ANOS = %d\n", anos);


    return 0;
}