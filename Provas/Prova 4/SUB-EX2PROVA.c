#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    int numJogo;
    int n[6];
}Lotery;

int Compare(Lotery *l, int result[], int k); 

int main(){
    Lotery *l=NULL;
    int t, i;
    int result[7];
    int c=0;

    scanf("%d", &t);
    l = (Lotery*)malloc(t*sizeof(Lotery));

    for(i = 0; i < t; i++){
        scanf("%d %d %d %d %d %d %d", &(l[i].numJogo), &(l[i].n[0]), &(l[i].n[1]), &(l[i].n[2]), &(l[i].n[3]), &(l[i].n[4]), &(l[i].n[5]));
    }
    for(i = 0; i < 7; i++){
        scanf("%d", &result[i]);
    }
    for(i=0; i<t; i++){
        c+=Compare(l, result, i);
    }
    if(c==0){
        printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d\n", result[0]);
    }
    free(l);
    return 0;
}
int Compare(Lotery *l, int result[], int k){
    int i, j, count=0;

    for(i=0; i<6; i++){
        for(j=0;j<7; j++){
            if(j!=0 && result[j]==l[k].n[i]){
                count++;
            }
        }
    }
    if(count==4){
        printf("QUADRA %d: ", l[k].numJogo);
        for(i=0; i<6; i++){
            for(j=0;j<7; j++){
                if(j!=0 && result[j]==l[k].n[i]){
                    printf("%d ", l[k].n[i]);
                }
            }
        }
        printf("\n");
    }
    if(count==5){
        printf("QUINA %d: ", l[k].numJogo);
        for(i=0; i<6; i++){
            for(j=0;j<7; j++){
                if(j!=0 && result[j]==l[k].n[i]){
                    printf("%d ", l[k].n[i]);
                }
            }
        }
        printf("\n");
    }
    if(count==6){
        printf("SENA %d: ", l[k].numJogo);
        for(i=0; i<6; i++){
            for(j=0;j<7; j++){
                if(j!=0 && result[j]==l[k].n[i]){
                    printf("%d ", l[k].n[i]);
                }
            }
        }
        printf("\n");
    }
    if(count<4){
        return 0;
    }
    else return 1;
}