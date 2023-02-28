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


































































































/**#include <stdio.h>
#include <stdlib.h>

#define SM 1200

typedef struct {
    int matricula;
    int idade;
    int numFilhos;
    char sexo;
    double salario;
} FUNCIONARIO;

int qtdfi(int a, int b, int n);
int qtdmulheresfilhos(int b, int n);
int qtdhomensfilhos(int b, int n);
int qtdfm47(int i, int s, int n);

int main()
{
    int n, i;
    int qfi = 0, qm = 0, qh = 0, qfm = 0;
    int id, qSM, fm, fh;
    FUNCIONARIO * pt = NULL;

    scanf("%d", &n);
    pt = (FUNCIONARIO *) calloc( n, sizeof(FUNCIONARIO) );

    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d %c %lf", &(pt[i].matricula), &(pt[i].idade), &(pt[i].numFilhos), &(pt[i].sexo), &(pt[i].salario));
    }

    for(i = 0; i < n; i++)
    {
        id += pt[i].idade;
        if(pt[i].sexo == 'F') fm += pt[i].numFilhos;
        if(pt[i].sexo == 'M') fh += pt[i].numFilhos;
        if(pt[i].idade > 47 && pt[i].salario < 2*SM) qfm++;
    }

    for(i = 0; i < n; i++)
    {
        if(pt[i].idade > id/n) qfi++;
        if(pt[i].numFilhos > fm/n) fm++;
        if(pt[i].numFilhos > fh/n) fh++;   
    }

    printf("%d %d %d %d\n", qfi, qm, qh, qfm);

    free(pt);

    return 0;
}*/

/**int qtdfi(int a, int b, int n)
{
    int i, medid, id;
    int qtdfi = 0;

    for(i = 0; i < n; i++)
    {
        id += a;
    }
    medid = id/n;

    if(a > medid && b > 3*SM) qtdfi++;

    return qtdfi;
}

int qtdmulheresfilhos( int b, int n)
{
    int i, medf, f;
    int qtdmf = 0;

    for(i = 0; i < n; i++)
    {
        f += b;
    }
    qtdmf = f/n;

    return qtdmf;
}

int qtdhomensfilhos( int b, int n)
{
    int i, medf, f;
    int qtdhf = 0;

    for(i = 0; i < n; i++)
    {
        f += b;
    }
    qtdhf = f/n;

    return qtdhf;
}

int qtdfm47(int i, int s, int n)
{
    int j, fmst;
    int qtdfm47;

    if(j > 47 && s < 2*SM) fmst++;

    qtdfm47 += fmst;

    return qtdfm47;
}

    qfi = qtdfi(pt[i].idade, pt[i].salario, n);
        if(pt[i].sexo == 'F') qm = qtdmulheresfilhos(pt[i].numFilhos, n);
        if(pt[i].sexo == 'M') qh = qtdhomensfilhos(pt[i].numFilhos, n);
        qfm = qtdfm47(pt[i].idade, pt[i].salario, n);

*/
