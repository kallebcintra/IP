#include <stdio.h>

int main()
{
    int n;
    int om, oc, od, ou;

    scanf("%d", &n);

    if(n<=0 || n>9999)
    {
        printf("Numero invalido!\n");
        return 0;
    }

    printf("(");

    if(n > 999) printf("quarta");
    else if(n > 99) printf("terceira");
    else if(n > 9) printf("segunda");
    else printf("primeira");

    printf(" ordem) %d =", n);

    om = n/1000;
    oc = n%1000/100;
    od = n%100/10;
    ou = n%10;

    if(om > 0)
    {
        printf(" %d unidade", om);
        if(om > 1) printf("s");
        printf(" de milhar ");
    }

    if(oc > 0)
    {
        if(om > 0) printf("+");
        printf(" %d centena", oc);
        if(oc > 1) printf("s");
        printf(" ");
    }

    if(od > 0)
    {
        if(om > 0 || oc > 0) printf("+");
        printf(" %d dezena", od);
        if(od > 1) printf("s");
        printf(" ");
    }

    if(ou > 0)
    {
        if(om > 0 || oc > 0 || od > 0) printf("+");
        printf(" %d unidade", ou);
        if(ou>1) printf("s");
        printf(" ");
    }

    printf("=");

    if(om > 0) printf(" %d", om*1000);
    if(oc > 0)
    {
        if(om > 0) printf(" +");
        printf(" %d", oc*100);
    }
    if(od > 0)
    {
        if(om > 0 || oc > 0) printf(" +");
        printf(" %d", od*10);
    }
    if(ou > 0)
    {
        if((om+oc+od) > 0) printf(" +");
        printf(" %d", ou);
    }

    printf("\n");

    return 0;
}