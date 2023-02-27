#include <stdio.h>

int fibonacci( int t1, int t2, int n);

int main()
{
    int t1;
    int t2;
    int n;

    scanf("%d %d %d", &t1, &t2, &n);
    fibonacci(t1, t2, n);

    return 0;
}

/**
2 * Retorna o n-ésimo termo da sequência de Fibonacci
3 * @param t1 primeiro termo da sequência
4 * @param t2 segundo termo da sequência
5 * @param n a posição do termo desejado da sequência
6 * @return o valor do n-ésimo termo da sequência
7 */
int fibonacci(int t1, int t2, int n)
{
    int i;
    int t3;

    for(i = 3; i <= n; i++)
    {
        t3 = t1 + t2;

        t1 = t2;
        t2 = t3;
    }
    if(i==n)
    {
        printf("%d", n);
    }
    else{
        printf("%d\n", t3);
    }
}