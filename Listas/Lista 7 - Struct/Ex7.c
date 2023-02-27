#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    double d[4];
} Point4D;

// Distancia entre dois pontos
double dist( Point4D a, Point4D b);

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

    for(i = 0; i < n-1; i++)
    {
        d = dist(pt[i], pt[i+1]);
        printf("%.2lf\n", d);
    }

    free(pt);

    return 0;
}

double dist( Point4D a, Point4D b)
{
    double l1, l2, l3, l4;

    l1 = a.d[0] - b.d[0];
    l2 = a.d[1] - b.d[1];
    l3 = a.d[2] - b.d[2];
    l4 = a.d[3] - b.d[3];

    return sqrt(l1*l1 + l2*l2 + l3*l3 + l4*l4);
}