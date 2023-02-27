#include <stdio.h>

int numPrimo( int n );

int main()
{
    int n, r;

    scanf("%d", &n);

    if(n<0)
    {
        printf("Numero invalido!\n");
        return 0;
    }
    if(n == 1)
    {
        printf("O NUMERO 1 NAO E CONSIDERADO PRIMO\n");
        return 0;
    }

    r = numPrimo(n);
    
    if(r == 1) printf("Numero e primo\n");
    else printf("Numero nao e primo\n");
    
    return 0;
}

int numPrimo( int n )
{
    int i, flag = 0;
    
    for(i = 2; i <= n / 2; i++) 
    {
      // Condição para não primo
      if(n % i == 0) 
      {
        flag = 1;
        break;
      }
    }
    
    if(flag == 1) return 0;
    else if(flag == 0) return 1;
}


