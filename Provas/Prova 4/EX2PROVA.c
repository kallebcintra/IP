// INCOMPLETO

#include <stdio.h>
#include <stdlib.h>

/**
* Essa função recebe um valor "n" e retorna um ponteiro
* para uma matriz quadrada de inteiros com dimensão nxn.
* A memória é alocada dinamicamente com uma estrutura
* bidimensional.
*
* @param n Dimensão da matriz
* @return int** Ponteiro para a matriz
*/
int ** cria_matrix( int n );

/**
* Essa função recebe um ponteiro para uma matriz alocada
* dinamicamente e libera a memória ocupada por ela.
*
* @param m Ponteiro para a matriz
*/
void destroi_matrix( int ** m );

/**
* Essa função recebe um ponteiro para uma matriz alocada
* dinamicamente, sua dimensão n e retorna 1 caso essa
* matriz seja uma matriz de permutação ou 0 caso contrário.
* Além disso, essa função também calcula a soma de todos os
* elementos da matriz e a retorna via referência pelo
* ponteiro "soma".
*
* @param m Ponteiro para a matriz
* @param n Dimensão da matriz
* @param soma Ponteiro para inteiro que retornará a soma dos
* elementos da matriz
* @return int 1 caso a matriz seja de permutação
* e 0 caso contrário
*/
int ePermutacao( int ** m, int n, int * soma );

typedef struct {
    int ;
} later;

int main()
{
    int i, j, n;

    scanf("%d", &n);

    cria_matrix(n);

    return 0;
}

int ** cria_matrix( int n )
{
    int i, j;
    
    //pt = (matrix *) calloc( n, sizeof(matrix) );
}
