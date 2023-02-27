// Incompleto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codcurso;
    float valcredito;
    char nomecurso[100];
} Cursos;

typedef struct {
    char nomealuno[100];
    int codcurso;
    int numcredito;
} Alunos;

int main()
{
    float mensalidade;
    int i, j;
    int n, m;
    Cursos * pt = NULL;
    Alunos * pv = NULL;

    scanf("%d", &n);
    //if(n < 5 || n > 30){
        //printf("Numero invalido!\n");
        //return 0;
    //}

    pt = (Cursos *) calloc( n, sizeof(Cursos) );
    pv = (Alunos *) calloc( n, sizeof(Alunos) );

    for(i = 0; i < n; i++)
    {
        scanf("%d", &(pt[i].codcurso));
        scanf("%f", &(pt[i].valcredito));
        //scanf("%[^n]", &(pt[i].nomecurso));
        gets(pt[i].nomecurso);
    }

    scanf("%d", &m);

    for(j = 0; j < m; j++)
    {
        //scanf("%[^n]%*c", &(pv[i].nomealuno));
        gets(pv[j].nomealuno);
        scanf("%d", &(pv[j].codcurso));
        scanf("%d", &(pv[j].numcredito));
    }

    for(i = 0; i < m; i++)
    {
        mensalidade = pt[i].valcredito * pv[i].numcredito;
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f", pv[i].nomealuno, pt[i].nomecurso, pv[i].numcredito, pt[i].valcredito, mensalidade);
    }

    return 0;
}

