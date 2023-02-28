// INCOMPLETO

#include <stdio.h>


#define k 101

int remover_duplicada(int arr[], int n);

int main()
{
    int n;
    int arr[k];
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
      if(arr[i] == arr[i-1]) n++;
    }

    n = remover_duplicada(arr, n);

    printf("(%d", arr[0]);

    for (i = 1; i < n; i++)
    {
        printf(",%d", arr[i]);
    }
    printf(")\n");

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