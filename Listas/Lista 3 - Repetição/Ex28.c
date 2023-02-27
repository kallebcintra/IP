// Incompleto
#include <stdio.h>

int main()
{
    float vsm, vli, tv1, tv2;
    int nm, ntv1, ntv2;
    double SB, SL, comissao1 = 0, comissao2 = 0;
    //int x, i, j, y;

    scanf("%f %f %f %f%*c", &vsm, &vli, &tv1, &tv2);

    while(nm != 0)
    {
        scanf("%d %d %d%*c", &nm, &ntv1, &ntv2);

        if(ntv1 >= 10) comissao1 = (0.14*tv1)*ntv1;
        else comissao2 = (0.13*tv1)*ntv1;
        if(ntv2 >= 20) comissao2 = (0.13*tv2)*ntv2;
        else comissao2 = (0.12*tv2)*ntv2;

        SB = vsm + comissao1 + comissao2;
        if(SB <= vli) SL = SB*0.92;
        else SL = (((SB*0.92)-vli)*0.85) + vli;

        printf("MATRICULA = %d, SALARIO BRUTO = %.2lf, SALARIO LIQUIDO = %.2lf\n", nm, SB, SL);
    }


    return 0;
}