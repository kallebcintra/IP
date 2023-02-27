#include <stdio.h>

int main()
{
    double N;

    scanf("%lf", &N);

    if(9.0<=N && N<=10)
    {
        printf("NOTA = %.1lf CONCEITO = A\n", N);
    }
    else if(7.5<=N && N<9.0)
    {
        printf("NOTA = %.1lf CONCEITO = B\n", N);
    }
    else if(6<=N && N<7.5)
    {
        printf("NOTA = %.1lf CONCEITO = C\n", N);
    }
    else
    {
        printf("NOTA = %.1lf CONCEITO = D\n", N);
    }


    return 0;
}