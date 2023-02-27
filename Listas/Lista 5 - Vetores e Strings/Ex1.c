#include <stdio.h>

#define n 100000
#define m 1000

int main()
{
    int x;
    int V[n];
    int qtb_testes;
    int i, j, l, qtb, z;
    int temp;

    scanf("%d", &x);

    for(i = 0; i < x; i++)
    {
        scanf("%d", &V[i]);   
    }

    scanf("%d", &qtb);

    for(i = 0; i < qtb; i++)
    {
        scanf("%d", &qtb_testes);

        for(j = 0; j < x; j++)
        {
            if(qtb_testes == V[j]){
               printf("ACHEI\n");
               break;
            }   
        }
        if(j == x){
            printf("NAO ACHEI\n");
        }
    }

    return 0;
}