// Quase completo (Falta colocar em ordem)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct {
    double d[4];
} Point4D;

double Norma( Point4D a );

int main()
{
    int n, i;
    Point4D * pt = NULL;
    double d;

    scanf("%d", &n);
    pt = (Point4D *) calloc( n, sizeof(Point4D) );

    for(i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf %lf", &(pt[i].d[0]), &(pt[i].d[1]), &(pt[i].d[2]), &(pt[i].d[3]));
    }

    for(i = 0; i < n; i++)
    {
        d = Norma(pt[0]);
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", pt[i].d[0], pt[i].d[1], pt[i].d[2], pt[i].d[3], d);
        //if(Norma(pt[i]) < d){
            //d = Norma(pt[i]);
        //}
        //printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", pt[i].d[0], pt[i].d[1], pt[i].d[2], pt[i].d[3], d);
    }

    free(pt);

    return 0;
}

double Norma( Point4D a )
{
    double au, ax, ay, az;
    double N;
    int i;

    au = a.d[0] * a.d[0];
    ax = a.d[1] * a.d[1];
    ay = a.d[2] * a.d[2];
    az = a.d[3] * a.d[3];

    N = sqrt(au + ax + ay + az);

    return sqrt(au + ax + ay + az);
}