#include <stdio.h>
#include <math.h>

int main()
{
    double n, i, k, s, j = 0, w = 0;

    scanf("%lf %lf %lf %lf", &n, &i, &k, &s);

    for(w = 0; w < 4; w++){
        if(w == 0) printf("Tabuada de soma:\n");
        if(w == 1) printf("Tabuada de subtracao:\n");
        if(w == 2) printf("Tabuada de multiplicacao:\n");
        if(w == 3) printf("Tabuada de divisao:\n");

        for(j = 0; j < k; j++){
            if(w == 0){
                printf("%.2lf + %.2lf = %.2lf\n", n, i+j*s, n+i+j*s);
            }
            if(w == 1){
                printf("%.2lf - %.2lf = %.2lf\n", n, i+j*s, n-(i+j*s));
            }
            if(w == 2){
                printf("%.2lf x %.2lf = %.2lf\n", n, i+j*s, n*(i+j*s));
            }
            if(w == 3){
                printf("%.2lf / %.2lf = %.2lf\n", n, i+j*s, n/(i+j*s));
            }        
        }

    }



    return 0;
}