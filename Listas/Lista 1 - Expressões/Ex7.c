#include <stdio.h>

int main()
{
    float h;
    float a; 
    double Ab;
    double Vol;

    scanf("%f", &h);
    scanf("%f", &a);

    Ab = (3*(a*a)*1.73205)/2.0;
    Vol = (Ab*h)/3.0;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", Vol);

    return 0;
}