#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    if(x%3 == 0 && x%5 == 0)
    {
        printf("O NUMERO E DIVISIVEL\n");
    }
    else
    {
        printf("O NUMERO NAO E DIVISIVEL\n");
    }

    return 0;
}