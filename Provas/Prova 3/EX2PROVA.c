#include <stdio.h>
#define SIZE 101

int main()
{
    int A[SIZE][SIZE];  // Original matrix
    int B[SIZE][SIZE];  // Transpose matrix

    int row, col, isSymmetric, isSymmetric2;
    int n;

    scanf("%d", &n);
    if(n < 1 || n > 10){
        printf("dimensao invalida\n");
        return 0;
    }

    /* Input elements in matrix A from user */
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /*
     * Find transpose of matrix A
     */
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            /* Store each row of matrix A to each column of matrix B */
            B[row][col] = A[col][row];
        }
    }


    /*
     * Check whether matrix A is equal to its transpose or not
     */
    isSymmetric = 1;
    for(row=0; row<n && isSymmetric; row++)
    {
        for(col=0; col<n; col++)
        {
            /* If matrix A is not equal to its transpose */
            if(A[row][col] != B[row][col])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    isSymmetric2 = 1;
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n - row; col++)
        {
            if (A[row][col] != B[n - col - 1][n - row - 1])
            {
                isSymmetric2 = 0;
                break;
            }
        }
    }
    

    if(isSymmetric == 1 && isSymmetric2 == 1)
    {
        printf("bissimetrica\n");
    }
    else
    {
        printf("nao bissimetrica\n");
    }

    return 0;
}