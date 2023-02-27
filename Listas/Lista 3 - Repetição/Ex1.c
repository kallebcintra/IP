#include <stdio.h>

int main()
{
   int n, x;
   double ingressos, pop, geral, arqui, cad, RJ;

   scanf("%d\n", &n);

   for(x = 1; x <= n; x++)
   {
       scanf("%lf %lf %lf %lf %lf", &ingressos, &pop, &geral, &arqui, &cad);

       RJ = 0;
       RJ += ingressos*(pop/100)*1;
       RJ += ingressos*(geral/100)*5;
       RJ += ingressos*(arqui/100)*10;
       RJ += ingressos*(cad/100)*20;

       printf("A RENDA DO JOGO N. %d E = %.2lf\n", x, RJ);
   }

    return 0;
}