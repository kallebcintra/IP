#include <stdio.h>

int main()
{
    int h;
    int m;
    int s;
    int X;

    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);

    X = h*3600 + m*60 + s;

    printf("O TEMPO EM SEGUNDOS E = %d\n", X);

    return 0;
}