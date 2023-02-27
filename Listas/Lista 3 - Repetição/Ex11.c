#include <stdio.h>

int main()
{
    int n, i;
    int msc = 0;
    int t;
    int x;
    int ant;

    while ( scanf("%d", &n) != EOF )
    {
        scanf("%d", &ant);
        t = 1;

        for(i=1;i<n;i++)
        {
            scanf("%d", &x);
            if(x>ant) t++;
            else t = 1;
            if(t>msc) msc = t;
            ant = x;
        } 
        printf("O comprimento do segmento crescente maximo e: %d\n", msc);
        
    }
    return 0;
}