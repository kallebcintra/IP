// Not Working

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double num[50];
    double den[50];
} Fracoes;

int main()
{
    int n, m;
    int i, j, z;
    Fracoes * pt = NULL;

    scanf("%d", &n);
    if(n > 30) return 0;
    scanf("%d", &m);
    if(m > 50) return 0;

    pt = (Fracoes *) calloc( n, sizeof(Fracoes) );


    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%lf%*c%lf", &(pt[j].num[j]), &(pt[j].den[j]));

        }
    }

    for(i = 0; i < n; i++)
    {
        printf("Caso de teste %d\n", i+1);
        for(j = 0; j < m; j++)
        {
            for(z = j+1; z <= m+1; z++)
            {
                if((pt[j].num[j]/pt[j].den[j]) == (pt[z].num[z]/pt[z].den[z]))
                {
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", pt[j].num[j], pt[j].den[j], pt[z].num[z], pt[z].den[z]);
                }
            }
        }
    }

    return 0;
}