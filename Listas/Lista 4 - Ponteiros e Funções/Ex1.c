#include <stdio.h>

unsigned long int fat(int n);

int main()
{
    unsigned long int n;
    unsigned long int f;

    scanf("%lu", &n);
    f = fat(n);
    printf("%lu! = %lu\n", n, f);

    return 0;
}

/**
* Funcao que calcula o fatorial de um numero n
* @param n um numero inteiro positivo
* @return o fatorial de n
*/
unsigned long int fat(int n)
{
    int i;
    unsigned long int original;
    for(i = 1; n > 1; n = n-1)
    {
        i = i*(n);
    }
    return i;
}


