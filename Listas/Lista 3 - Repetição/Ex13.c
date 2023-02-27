#include <stdio.h>

int main()
{
    int n, contPar, contImp, somaPar = 0, somaImpar = 0;
    double mp, mi;

    contPar = 0;
    contImp = 0;
    while(n != 0)
    {
        scanf("%d", &n);
        if(n%2 == 0 && n != 0)
        {
            somaPar += n;
            contPar++;
        }
        else if(n%2 != 0)
        {
            somaImpar += n;
            contImp++;
        }
    }

    if(contPar > 0) mp = (double)somaPar/contPar;
    if(contImp > 0) mi = (double)somaImpar/contImp;

    printf("MEDIA PAR: %.6lf\nMEDIA IMPAR: %.6lf\n", mp, mi);

    return 0;
}