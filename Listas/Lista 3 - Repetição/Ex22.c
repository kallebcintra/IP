#include <stdio.h>

int main()
{
    int h, co, ca;
    int h1;

    scanf("%d", &h);

    for(h1 = 5; h1 <= h; h1++)
    {
        for(co = 1; co < h1; co++)
        {
            for(ca = co+1; ca < h1; ca++)
            {
                if(h1*h1 == ca*ca + co*co)
                {
                    printf("hipotenusa = %d, catetos %d e %d\n", h1, co, ca);
                }
            }
        }
    }

    return 0;
}