// Incompleto
#include <stdio.h>


int main()
{
   int ns1,ns2,ns3,ns4,ns5,ns6,ns7,ns8, uf1,uf2, dv1,dv12, dv2,dv22;

   scanf("%d%d%d%d%d%d%d%d %d%d", &ns1,&ns2,&ns3,&ns4,&ns5,&ns6,&ns7,&ns8, &uf1,&uf2);

   if((uf1 && uf2) > 28 || (uf1 && uf2) < 1)
   {
       printf("CODIGO DA UF INVALIDO!\n");
       return 0;
   }

   dv1 = ((ns1*2)+(ns2*3)+(ns3*4)+(ns4*5)+(ns5*6)+(ns6*7)+(ns7*8)+(ns8*9));
   dv12 = dv1%11;

   if(dv12 > 9)
   {
       printf("PROGRAMDADOR SEM HABILIDADE SUFICIENTE\n");
       return 0;
   }

   dv2 = (uf1*7)+(uf2*8)+(dv12*9);
   dv22 = dv2%11;


   printf("%d%d%d%d%d%d%d%d%d%d/%d%d\n", ns1,ns2,ns3,ns4,ns5,ns6,ns7,ns8, uf1,uf2, dv12,dv22);

    return 0;
}