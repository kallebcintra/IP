#include <stdio.h>

int main()
{
    int i;
    float a, b, c;
    float maior, menor, meio;

    scanf("%d %f %f %f", &i, &a, &b, &c);

    maior = a;
    menor = a;
    meio = a;

    if(i>4) 
    {
        printf("ERRO\n");
        return 0;
    }

    else if(i == 1)
    {
        if(b < menor) menor = b;
        if(b > maior) maior = b;

        if(c < menor) menor = c;
        if(c > maior) maior = c;

        if(b < a && b > c || b < c && b > a) meio = b;
        if(c < a && c > b || c > a && c < b) meio = c;

        printf("%.2f %.2f %.2f ", menor, meio, maior);
    }
    else if(i == 2)
    {
        if(b < menor) menor = b;
        if(b > maior) maior = b;

        if(c < menor) menor = c;
        if(c > maior) maior = c;

        if(b < a && b > c || b < c && b > a) meio = b;
        if(c < a && c > b || c > a && c < b) meio = c;

        printf("%.2f %.2f %.2f ", maior, meio, menor);
    }
    else if(i == 3)
    {
        if(b < menor) menor = b;
        if(b > maior) maior = b;

        if(c < menor) menor = c;
        if(c > maior) maior = c;

        if(b < a && b > c || b < c && b > a) meio = b;
        if(c < a && c > b || c > a && c < b) meio = c;

        printf("%.2f %.2f %.2f ", meio, maior, menor);
    }

    return 0;
}