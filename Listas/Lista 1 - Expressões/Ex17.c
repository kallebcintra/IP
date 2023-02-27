#include <stdio.h>

int main()
{
    int X, Y, Z, W;
    int Valor; 

    scanf("%d", &Valor);

    X = Valor/100;
    printf("NOTAS DE 100 = %d\n", X);

    Y = (Valor - 100*X)/50;
    printf("NOTAS DE 50 = %d\n", Y);

    Z = (Valor - 100*X - 50*Y)/10;
    printf("NOTAS DE 10 = %d\n", Z);

    W = (Valor - 100*X - 50*Y - 10*Z);
    printf("MOEDAS DE 1 = %d\n", W);
    
    return 0;
}
