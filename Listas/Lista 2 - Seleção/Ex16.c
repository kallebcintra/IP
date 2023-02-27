// Quase completo
#include <stdio.h>

int main()
{
    int MT, ND;
    float SM, SF, TI;
    double w, v, x, in;

    scanf("%d %f %d %f %f", &MT, &SM, &ND, &SF, &TI);

    printf("MATRICULA = %d\n", MT);

    in = (TI*SF)/100;

    if(SF > 12*SM)
    {
        v = SF*0.2;
        w = v - ND*300;
        x = in - w;
        printf("IMPOSTO BRUTO = %.2lf\n", v);
        printf("IMPOSTO LIQUIDO = %.2lf\n", w);
        printf("RESULTADO = %.2lf\n", x);
        if(x<0) printf("IMPOSTO A RECEBER\n");
        else if(x>0) printf("IMPOSTO A PAGAR\n"); 
        else printf("IMPOSTO QUITADO\n");
    }
    else if(SF > 5*SM && SF < 12*SM)
    {
        v = SF*0.08;
        w = v - ND*300;
        x = in - w;
        printf("IMPOSTO BRUTO = %.2lf\n", v);
        printf("IMPOSTO LIQUIDO = %.2lf\n", w);
        printf("RESULTADO = %.2lf\n", x);
        if(x<0) printf("IMPOSTO A RECEBER\n");
        else if(x>0) printf("IMPOSTO A PAGAR\n"); 
        else printf("IMPOSTO QUITADO\n");
    }
    else
    {
        v = 0;
        w = v - ND*300;
        x = in - w;
        printf("IMPOSTO BRUTO = %.2lf\n", v);
        printf("IMPOSTO LIQUIDO = %.2lf\n", w);
        printf("RESULTADO = %.2lf\n", x);
        if(x<0) printf("IMPOSTO A RECEBER\n");
        else if(x>0) printf("IMPOSTO A PAGAR\n"); 
        else printf("IMPOSTO QUITADO\n");
    }

    return 0;
}