#include <stdio.h>

int main()
{
    int ano;

    scanf("%d", &ano);

    if(ano > 1582 && ano%4 == 0 && ano%100 != 0 || ano > 1582 && ano%4 == 0 && ano%100 == 0 && ano%400 == 0)
    {
        printf("ANO BISSEXTO\n");
    }
    else
    {
        printf("ANO NAO BISSEXTO\n");
    }

    return 0;
}