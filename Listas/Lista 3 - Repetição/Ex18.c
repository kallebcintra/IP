#include <stdio.h>

int main()
{
    double ing;
    double vi;
    double vf;
    double mvf;
    double lucro;
    int ni;
    double V, L;
    int N; 
    int b = 0;

    scanf("%lf", &ing);
    scanf("%lf", &vi);
    scanf("%lf", &vf);

    if(vi >= vf)
    {
        printf("INTERVALO INVALIDO.");
        return 0;
    }

    while(vi <= vf)
    {
        V = vi;
        printf("V: %.2lf, ", V);
            if(vi < ing)
            {
                N = 120 + 2*25*(ing-vi);
                L = V*N - (200+(0.05*N));
            }
            if(V == ing)
            {
                N = 120;
                L = N*V - (200+(0.05*N));
            }
            if(V > ing)
            {
                N = 120 - (30*2*(vi-ing));
                L = N*V - (200+(0.05*N));
            }
            printf("N: %d, L: %.2lf\n", N, L);

            if(L >= b)
            {
                mvf = V;
                ni = N; 
                lucro = L;

                b = L;
            }

            vi++;
    }

    printf("Melhor valor final: %.2lf\n", mvf);
    printf("Lucro: %.2lf\n", lucro);
    printf("Numero de ingressos: %d\n", ni);

    return 0;
}