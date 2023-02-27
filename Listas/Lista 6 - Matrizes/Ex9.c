#include <stdio.h>

int main()
{
    int rows, cols, i, j, k;
    int r = 1;

    scanf("%d", &rows);
    scanf("%d", &cols);

    k = 1;

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= cols; j++)
        {
            if(k == 1)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", r++);
            }
            k *= -1;
        }

        if(cols % 2 == 0)
        {
            k *= -1;
        }

        printf("\n");
    }

    return 0;
}