// Incompleto
#include <stdio.h>

int main()
{
  int m, n, i, inicio; 

  scanf("%d", &m);

  inicio = 1;
  for (n = 1; n <= m; n++)
  {
    printf("%d*%d*%d = %d", n, n, n, inicio);

    for (i = 1; i < n; i++)

      printf("+%d", inicio + 2 * i);
      inicio = inicio + 2 * n;
      printf("\n");    
  }

  return 0;
}
