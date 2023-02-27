#include <stdio.h>
#include <math.h>

double raizesEq2Grau( int a, int b, int c);

int main()
{
    int a, b, c;
    float delta, x1, x2;

    scanf("%d %d %d", &a, &b, &c);

    raizesEq2Grau(a, b, c);

    return 0;
}

double raizesEq2Grau( int a, int b, int c)
{
    double delta, x1, x2, temp;

    delta = (b*b) - 4*a*c;

    if(delta == 0 || a == 0){

       if(a != 0) x1 = -b/(2*a);
       else x1 = -c/b;

       printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
       return 1;
    }
    else if(delta < 0){
       printf("RAIZES IMAGINARIAS\n");
       return 0;
    }
    else{
       
       x1 = (-b + sqrt(delta))/ (2*a);
       x2 = (-b - sqrt(delta))/ (2*a);

       if(x1>x2){
          temp = x1;
          x1 = x2;
          x2 = temp;
       }

       printf("RAIZES DISTINTAS\n");
       printf("X1 = %.2lf\n", x1);
       printf("X2 = %.2lf\n", x2);
       return 2;
    }   
}


/**int main()
{
    double a, b, c, delta, x1, x2, temp;
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b*b) - 4*a*c;

    if(delta == 0 || a == 0){

       if(a != 0) x1 = -b/(2*a);
       else x1 = -c/b;

       printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
       return 1;
    }
    else if(delta < 0){
       printf("RAIZES IMAGINARIAS\n");
       return 0;
    }
    else{
       
       x1 = (-b + sqrt(delta))/ (2*a);
       x2 = (-b - sqrt(delta))/ (2*a);

       if(x1>x2){
          temp = x1;
          x1 = x2;
          x2 = temp;
       }

       printf("RAIZES DISTINTAS\n");
       printf("X1 = %.2lf\n", x1);
       printf("X2 = %.2lf\n", x2);
       return 2;
    }

    return 0;
}*/

/**float delta, x1, x2;

    delta = (b*b) - 4*a*c;

    if(delta<0)
    {
        printf("RAIZES IMAGINARIAS\n");
        return 0;
    }
    if(delta>0)
    {
        printf("RAIZES DISTINTAS\n");
        x1 = (-b + sqrt(delta)) /(2*a);
        x2 = (-b - sqrt(delta)) /(2*a);
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
        return 2;
    }
    else
    {
        printf("RAIZ UNICA\n");
        x1 = -b /(2*a);
        printf("x1 = %.2f\n", x1);
        return 1;
    }*/