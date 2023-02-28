// INCOMPLETO (DOESN'T WORK)

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numJogo;
    int numero[6];
} CARTELA;

typedef struct {
    int numConcurso;
    int sorteados[6];
} SORTEADO;

int main()
{
    int n, i, j;
    CARTELA * pt = NULL;
    //SORTEADO * pv = NULL;
    int n1, n2, n3, n4, n5, n6, sumConcurso;
    int temp = 0, temp2;
    int x[100];

    scanf("%d", &n);
    pt = (CARTELA *) calloc( n, sizeof(CARTELA) );
    //pv = (SORTEADO *) calloc( n, sizeof(SORTEADO) );

    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d %d",&(pt[i].numJogo) ,&(pt[i].numero[0]), &(pt[i].numero[1]), &(pt[i].numero[2]), &(pt[i].numero[3]), &(pt[i].numero[4]),
        &(pt[i].numero[5]));
    }

    //for(i = 0; i < n; i++)
    scanf("%d %d %d %d %d %d %d", &sumConcurso, &n1, &n2, &n3, &n4, &n5, &n6);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6; j++)
        {
            if(pt[i].numero[j] == n1||pt[i].numero[j] == n2||pt[i].numero[j] == n3||pt[i].numero[j] == n4||pt[i].numero[j] == n5||
            pt[i].numero[j] == n6) {
                temp++;
                x[j] = pt[i].numero[j];

                //if(temp == 4 ) printf("QUADRA %d: \n", i+1);
                //if(temp == 5 ) printf("QUINA %d: \n", i+1);
                if(temp == 6) printf("SENA %d: \n", i+1);
                for(temp2 = 0; temp2 < 6; temp2++)
                {
                    printf("%d,", x[temp2]);
                }
            }
        }
    }

    //printf("%d %d\n", temp, temp2);

    free(pt);

    return 0;
}