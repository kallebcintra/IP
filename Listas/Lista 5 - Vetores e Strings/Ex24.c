#include <stdio.h>

#define k 1001

int remover_duplicada(int arr[], int n);

int main()
{
    int V[k];

    int n;
    int i, j, l, temp;

    scanf("%d", &n);
    if(n < 1 || n > 1000){
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d", &V[i]);
    }

    n = remover_duplicada(V, n);

    printf("%d\n", V[0]);

    for (i = 1; i < n; i++)
    {
        printf("%d\n", V[i]);
    }

    return 0;
}

int remover_duplicada(int arr[], int n)
{
    int temp[n];
    int j = 0;
    int i;

    if (n == 0 || n == 1)
    {
        return n;
    }

    for (i = 0; i < n - 1; i++)
      if (arr[i] != arr[i + 1])
        temp[j++] = arr[i];
    temp[j++] = arr[n - 1];

    for (i = 0; i < j; i++)
      arr[i] = temp[i];

    return j;
}