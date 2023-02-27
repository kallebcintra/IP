// Doesn't Work
#include <stdio.h>

int main()
{
    int n;
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int b1, b2, b1v, b2v;
    int x, x1=1, x2=1, x3=1;
    int i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &b1, &b2);

        x = a1+a2+a3+a4+a5+a6+a7+a8+a9;
        if(x%11 == 0) x1 = 0;

        b1v = ((a1*1)+(a2*2)+(a3*3)+(a4*4)+(a5*5)+(a6*6)+(a7*7)+(a8*8)+(a9*9));
        if(b1v%11 == 0) x2 = 0;
        if(b1v%11 == 10){
            b1v = 0;
            x2 = 0;
        } 

        b2v = ((a1*9)+(a2*8)+(a3*7)+(a4*6)+(a5*5)+(a6*4)+(a7*3)+(a8*2)+(a9*1));
        if(b2v%11 == 0) x3 = 0;
        if(b2v%11 == 10){
            b2v = 0;
            x3 = 0;
        }

        if(x1 == 0 && x2 == 0 && x3 == 0) printf("CPF valido\n");
        else printf("CPF invalido\n");
    }

    return 0;
}