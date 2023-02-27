// Doesn't Work
#include <stdio.h>

int main()
{
    unsigned long int cod_merc;
    float pcm;
    float pvm;
    int nvm;
    int i, j, k;
    int r = 0, s = 0, t, u, v;
    float x, y, z;

    while(scanf("%lu %f %f %d%*c", &cod_merc, &pcm, &pvm, &nvm) != EOF)
    {
        //scanf("%lu %f %f %d", &cod_merc, &pcm, &pvm, &nvm);

        if((pvm-pcm)/pvm*100 < 10) r++;
        else if((pvm-pcm)/pvm*100 >= 10 && (pvm-pcm)/pvm*100 <= 20) s++;
        else t++;

    }
}