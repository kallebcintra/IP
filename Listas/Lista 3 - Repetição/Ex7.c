#include <stdio.h>

int main()
{
    long unsigned int nm;
    int presenca;
    double mp, ml, ntf, nota;
    int i;

    while(1)
    {
        scanf("%lu", &nm);
        if(nm == -1) break;

        mp = 0;
        for(i=0;i<8;i++)
        {
            scanf("%lf", &nota);
            mp += nota;
        }
        mp /= 8;

        ml = 0;
        for(i=0;i<5;i++)
        {
            scanf("%lf", &nota);
            ml += nota;
        }
        ml /= 5;

        scanf("%lf", &ntf);

        scanf("%d", &presenca);

        nota = 0.7*mp + 0.15*ml + 0.15*ntf;
        presenca = (presenca>=128*.75);

        printf("Matricula: %lu, Nota Final: %.2lf, Situacao Final: ", nm, nota);

        if(nota >= 6 && presenca){
            printf("APROVADO\n");
        }
        else if(nota < 6 && presenca){
            printf("REPROVADO POR NOTA\n");
        }
        else if(nota >= 6 && !presenca){
            printf("REPROVADO POR FREQUENCIA\n");
        }
        else{
            printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
        }
    }

    return 0;
}