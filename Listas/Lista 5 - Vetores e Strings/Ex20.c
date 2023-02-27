#include <stdio.h>

#define m 1000

int main()
{
    int V[m];
    int C[m];
    int n, k;
    int i, j;
    int early = 0;

    scanf("%d %d", &n, &k); //Alunos na sala (n), Alunos necessários para não cancelar (k)

    if(n < 0 || n > 1000 || k < 0 || k > 1000 || k > n) //Casos Inválidos
    {
        printf("Informacoes invalidas!\n");
        return 0;
    }

    for(i = 0; i < n; i++) 
    {
        scanf("%d", &V[i]); //Pegando horário de chagada de cada aluno

        if(V[i] <= 0) early++; //Contador dos que chegaram cedo

        if(V[i] <= 0) C[i] = i+1; //Pegando a ordem colocada dos alunos que chegaram cedo ou na hora
    }

    if(early < k) //Caso a aula seja cancelada
    {
        printf("SIM\n");
        return 0;
    }

    printf("NAO\n");

    for(j = n; j >= 0; j--) //Loop para printar a ordem dos números de forma invertida
    {
        if(C[j] != 0) printf("%d\n", C[j]);
    }

    return 0;
}