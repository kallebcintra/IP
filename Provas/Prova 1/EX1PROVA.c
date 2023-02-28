#include <stdio.h>

int main()
{
   int n1, n2, n3, n4, n5, x, X;

   scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

   // Printar o menor número
   if(n1<n2 && n1<n3 && n1<n4 && n1<n5)
   {
       printf("MENOR: %d,", n1);
   }
   else if(n2<n1 && n2<n3 && n2<n4 && n2<n5)
   {
       printf("MENOR: %d,", n2);
   }
   else if(n3<n1 && n3<n2 && n3<n4 && n3<n5)
   {
       printf("MENOR: %d,", n3);
   }
   else if(n4<n1 && n4<n2 && n4<n3 && n4<n5)
   {
       printf("MENOR: %d,", n4);
   }
   else
   {
       printf("MENOR: %d,", n5);
   }
 
   // Printar o maior número
   if(n1>n2 && n1>n3 && n1>n4 && n1>n5)
   {
       printf(" MAIOR: %d\n", n1);
   }
   else if(n2>n1 && n2>n3 && n2>n4 && n2>n5)
   {
       printf(" MAIOR: %d\n", n2);
   }
   else if(n3>n1 && n3>n2 && n3>n4 && n3>n5)
   {
       printf(" MAIOR: %d\n", n3);
   }
   else if(n4>n1 && n4>n2 && n4>n3 && n4>n5)
   {
       printf(" MAIOR: %d\n", n4);
   }
   else
   {
       printf(" MAIOR: %d\n", n5);
   }

   // Printar tipo de ordem 
   if(n1<n2 && n2<n3 && n3<n4 && n4<n5)
   {
       printf("ORDENADO CRESCENTE\n");
   }
   else if(n1>n2 && n2>n3 && n3>n4 && n4>n5)
   {
       printf("ORDENADO DECRESCENTE\n");
   }
   else
   {
       printf("DESORDENADO\n");
   }

    return 0;
}