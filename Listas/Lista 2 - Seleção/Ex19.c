#include <stdio.h>

void ordenarQuatro(double a, double b, double c, double d);

int main()
{
    double n1, n2, n3, n4;
    double menor, meio1, meio2, maior, meio;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);

    ordenarQuatro(n1,n2,n3,n4);

    return 0;
}

void ordenarQuatro(double a,double b,double c,double d)
{
    double low1, low2, middle1, middle2, high1, high2, lowest, highest;

    if (a < b){
        low1 = a;
        high1 = b;
    }
        
    else{
        low1 = b;
        high1 = a;
    }

    if (c < d){
        low2 = c;
        high2 = d;
    }
    else{
        low2 = d;
        high2 = c;
    }

    if (low1 < low2){
        lowest = low1;
        middle1 = low2;
    }
    else{
        lowest = low2;
        middle1 = low1;
    }

    if (high1 > high2){
        highest = high1;
        middle2 = high2;
    }
    else{
        highest = high2;
        middle2 = high1;
    }

    if (middle1 < middle2) printf("%.2lf, %.2lf, %.2lf, %.2lf", lowest, middle1, middle2, highest);
    else printf("%.2lf, %.2lf, %.2lf, %.2lf", lowest, middle2, middle1, highest);

}