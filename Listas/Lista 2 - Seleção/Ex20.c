#include <stdio.h>

#define SALARIO 937.0

#define ESCOLA_PARTICULAR 1
#define ESCOLA_PUBLICA 2

#define PRETO 1
#define PARDO 2
#define INDIGENA 3
#define BRANCO 4

#define MSG_NAO_COTISTA "ALUNO NAO COTISTA"
#define MSG_COTISTA "ALUNO COTISTA"

int main()
{
    double renda;
    int np, escola, etnia;

    scanf("%lf %d %d %d", &renda, &np, &escola, &etnia);

    if(escola == ESCOLA_PARTICULAR){
        printf("ALUNO NAO COTISTA\n");
        return 0;
    }

    if(renda/np <= 1.5*SALARIO){
        if(etnia == BRANCO) printf("%s (L1)\n", MSG_COTISTA);
        else printf("%s (L2)\n", MSG_COTISTA);
    }
    else{
        if(etnia == BRANCO) printf("%s (L3)\n", MSG_COTISTA);
        else printf("%s (L4)\n", MSG_COTISTA);
    }

    return 0;
}