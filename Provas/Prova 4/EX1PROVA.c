#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    int idade;
    int numFilhos;
    char sexo;
    double salario;
} FUNCIONARIO;

int main()
{
    int i, j, n;
    FUNCIONARIO * pt = NULL;
    double idade, filhos;
    double mediaidade, mediafilhos;
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0;

    scanf("%d", &n);
    pt = (FUNCIONARIO *) calloc( n, sizeof(FUNCIONARIO) );

    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d %c %lf", &(pt[i].matricula), &(pt[i].idade), &(pt[i].numFilhos), &(pt[i].sexo), &(pt[i].salario));
    }

    for(i = 0; i < n; i++)
    {
        idade += pt[i].idade;
        filhos += pt[i].numFilhos;
    }
    mediaidade = idade/n;
    mediafilhos = filhos/n;

    for(i = 0; i < n; i++)
    {
        if(pt[i].idade > mediaidade && pt[i].salario > 3600) r1++;
        if(pt[i].numFilhos > mediafilhos && pt[i].sexo == 'F') r2++;
        if(pt[i].numFilhos > mediafilhos && pt[i].sexo == 'M') r3++;
        if(pt[i].idade > 47 && (pt[i].salario)/(pt[i].numFilhos+1) < 2400) r4++;
    }

    printf("%d %d %d %d\n", r1, r2, r3, r4);

    free(pt);

    return 0;
}
