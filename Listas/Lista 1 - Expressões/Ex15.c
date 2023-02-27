#include <stdio.h>

int main()
{
    int n, b;

    scanf("%d", &n);

    if( n<0 || n>255 )
    {
        printf("Numero invalido!\n");
        return 0;
    }

    b = n/128;
    printf("%d", b);

    n = n%128;
    b = n/64;
    printf("%d", b);

    n = n%64;
    b = n/32;
    printf("%d", b);

    n = n%32;
    b = n/16;
    printf("%d", b);

    n = n%16;
    b = n/8;
    printf("%d", b);

    n = n%8;
    b = n/4;
    printf("%d", b);

    n = n%4;
    b = n/2;
    printf("%d", b);

    n = n%2;
    b = n/1;
    printf("%d", b);

    printf("\n");

    return 0;
}
