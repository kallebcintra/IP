// Doesn't Work
#include <stdio.h>

int main()
{
    int num[100];
    int n;
    int i, j, k, temp;

    //temp = num[0];
    while(scanf("%d", &n) != 0)
    {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
            for(j = i+1; j < n; j++)
            {
                if(num[i] < num[j]) printf("ORDENADO");
            }
        }
    }

    return 0;
}