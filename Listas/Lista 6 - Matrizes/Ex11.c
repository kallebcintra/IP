#include <stdio.h>

#define DIM 100

#define wally 1111
#define wally_up 4
#define wally_left 0
#define wally_right 0
#define wally_down 8

int main()
{
    int A[DIM][DIM];
    int l, c;
    int m, n;
    int it, id, il, ir;

    scanf("%d %d", &m, &n);

    for(l = 0; l < m; l++)
        for(c = 0; c < n; c++)
            scanf("%d", &A[l][c]);

    for(l = 0; l < m; l++)
    {
        for(c = 0; c < n; c++)
        {
            if(A[l][c] == wally)
            {
                it = l-1;
                id = l+1;
                il = c-1;
                ir = c+1;
                if(it < 0) it = m-1;
                if(id >= m) id = 0;
                if(il < 0) il = n-1;
                if(ir >= n) ir = 0;
                if(A[it][c] == wally_up && A[id][c] == wally_down && A[l][il] == wally_left && A[l][ir] == wally_right) {
                    printf("%d %d\n", l, c);
                    return 0;
                }
            }
        }
    }

    printf("WALLY NAO ESTA NA MATRIZ\n");

    return 0;
}