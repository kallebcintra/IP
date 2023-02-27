#include <stdio.h>

int main()
{
    int A, B, C;
    int d;
    int MMC;

    scanf("%d %d %d", &A, &B, &C);

    MMC = 1;
    while( A != 1 || B != 1 || C != 1)
    {
        d = 2;
        while(A%d != 0 && B%d != 0 && C%d != 0) d++;
        if(A+B+C > 3) printf("%d %d %d: %d\n", A, B, C, d);

        MMC *= d;
        if(A%d==0) A = A/d;
        if(B%d==0) B = B/d;
        if(C%d==0) C = C/d;
    }

    printf("MMC: %d\n", MMC);

    return 0;
}