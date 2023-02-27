#include <stdio.h>

int main()
{
    int nm; 
    float ht;
    float vh, s;
    int C;

    while(nm != 0)
    {
        scanf("%d %f %f%*c", &nm, &ht, &vh);

        if(ht != 0 && vh != 0){
            s = ht*vh;
            printf("%d %.2f\n", nm, s);
        }
    }

    return 0;
}