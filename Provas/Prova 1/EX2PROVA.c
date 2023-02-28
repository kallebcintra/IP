#include <stdio.h>

int main()
{
    double A, B, C, K;
    char x;

    scanf("%lf%c%lf=%lf", &A, &x, &B, &C);

    if(x == '+') // Caso seja soma
    {
        if(A + B == C){
            printf("CORRETO\n");
        }
        else{
            K = A + B;
            printf("ERRADO! O resultado deveria ser: %lf", K);
        }
    }
    else if(x == '-') // Caso seja subtração
    {
        if(A - B == C){ 
        printf("CORRETO\n");
        }
        else{
            K = A - B;
            printf("ERRADO! O resultado deveria ser: %lf", K);
        }
    }
    else if(x == '*') // Caso seja multiplicação
    {
        if(A * B == C){ 
        printf("CORRETO\n");
        }
        else{ // Caso seja divisão
            K = A * B;
            printf("ERRADO! O resultado deveria ser: %lf",K);
        }
    }
    else
    {
        if(A / B == C){ 
        printf("CORRETO\n");
        }
        else{
            K = A / B;
            printf("ERRADO! O resultado deveria ser: %lf", K);
        }
    }

    return 0;
}