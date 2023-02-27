#include <stdio.h>

int main()
{
    int nc; // N° da conta
    float ca; // Consumo de água
    char tc; // Tipo de cliente
    double u;

    scanf("%d %f %c", &nc, &ca, &tc);

    printf("CONTA = %d\n", nc);

    if(tc == 'R') // Conta residencial
    {
        u = 5 + 0.05*ca;
        printf("VALOR DA CONTA = %.2lf\n", u);
    }
    else if(tc == 'C') // Conta comercial
    {
        if(ca > 80) u = 500 + (ca-80)*0.25;
        else if(ca <= 80) u = 500;
        printf("VALOR DA CONTA = %.2lf\n", u);
    }
    else if(tc == 'I') // Conta industrial
    {
        if(ca > 100) u = 800 + (ca-100)*0.04;
        else u = 800;
        printf("VALOR DA CONTA = %.2lf\n", u);
    }
    else
    {
        printf("TIPO DE CONTA INEXISTENTE\n");
    }

    return 0;
}