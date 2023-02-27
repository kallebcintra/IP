// Almost There
#include <stdio.h>
#include <math.h>

int main()
{
    double x, n, y, ang;
    int j, k, fat;

    scanf("%lf %lf", &x, &n);

    ang = x;
    j = 0;
    fat = 1;
    k = 1;
    y = 0;

    while(1)
    {
        if(k <= 2*j+1){
            if(j == 0) fat = 1;
            else fat *= k;
            k++;
        }
        else{
            if(j <= n){
                y += ((pow(-1,j))*(pow(x,2*j+1)))/fat;
            }
            j++;
            if(j>n) break;
        }
    }
    printf("seno(%.2lf) = %lf\n", ang, y);
    return 0;
}