#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;

    do
    {
        scanf("%d",&rows);
    } while(rows<1);
    do
    {
        scanf("%d",&cols);
    } while(cols<1);

    int arr[rows][cols];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int i_max = 0,j_max=0;
    int i_min = 0,j_min=0;
    int max=arr[0][0];
    int min=arr[0][0];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
                i_max=i;// i_max mean's the index i of the maximum element
                j_max=j;// j_max mean's the index j of the maximum element
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
                i_min=i;// i_max mean's the index i of the minimum element
                j_min=j;// j_max mean's the index j of the minimum element
            }
        }
    }

    int temp=arr[i_min][j_min];

    arr[i_min][j_min]=arr[i_max][j_max];
    arr[i_max][j_max]=temp;


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}