#include <stdio.h>

int main()
{
    int n;
    int A, B, C, D;

    scanf("%d", &n);

    A = n/100;
    B = n%100/10;
    C = n%10;
    D = (A+B*3+C*5)%7;

    printf("O NOVO NUMERO E = %d%d\n", n, D);

    return 0;
}