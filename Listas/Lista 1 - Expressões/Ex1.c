#include <stdio.h>

int main()
{
   float salario, gasto, custo;
   float consumo, desconto;

   scanf("%f", &salario);
   scanf("%f", &gasto);

   custo = (salario*0.70)/100;
   consumo = custo*gasto;
   desconto = (custo*gasto) - (custo*gasto)*0.10;

   printf("Custo por kW: R$ %.2f\n", custo);
   printf("Custo do consumo: R$ %.2f\n", consumo);
   printf("Custo com desconto: R$ %.2f\n", desconto);

    return 0;
}