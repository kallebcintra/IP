#include <stdio.h>
#include <math.h>

int classifica_iris( double pt, double pl, double st, double sl, double * d1, double * d2, double * d3 );

int main()
{
    double pt, pl, st, sl;
    double d1, d2, d3;

    int r;

    while(scanf("%lf %lf %lf %lf", &pt, &pl, &st, &sl) != EOF)
    {
        r = classifica_iris(pt, pl, st, sl, &d1, &d2, &d3);
    }

    return 0;
}

int classifica_iris( double pt, double pl, double st, double sl, double * d1, double * d2, double * d3 )
{
    double n1, n2, n3;

    n1 = *d1 = sqrt(((6.85 - pt)*(6.85 - pt)) + ((3.07 - pl)*(3.07 - pl)) + ((5.74 - st)*(5.74 - st)) + ((2.07 - sl)*(2.07 - sl)));
    n2 = *d2 = sqrt(((5.00 - pt)*(5.00 - pt)) + ((3.41 - pl)*(3.41 - pl)) + ((1.46 - st)*(1.46 - st)) + ((0.24 - sl)*(0.24 - sl)));
    n3 = *d3 = sqrt(((5.90 - pt)*(5.90 - pt)) + ((2.74 - pl)*(2.74 - pl)) + ((4.39 - st)*(4.39 - st)) + ((1.43 - sl)*(1.43 - sl)));

    if(n1 < n2 && n1 < n3)
    {
        printf("(%.2lf %.2lf %.2lf) setosa\n", n1, n2, n3);
        return 1;
    }
    else if(n2 < n1 && n2 < n3)
    {
        printf("(%.2lf %.2lf %.2lf) virginica\n", n1, n2 , n3);
        return 2;
    }
    else if(n3 < n1 && n3 < n2)
    {
        printf("(%.2lf %.2lf %.2lf) versicolor\n", n1, n2 , n3);
        return 3;
    }

}