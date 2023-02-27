// Incompleto
#include <stdio.h>

#define k 1000000

//void converteBinario(int n[], int i);

int main()
{
    int n[k];
    int i;
    int b;

    for(i = 0; n[i]; i++)
    {
        scanf("%d", &n[i]);
        //converteBinario(n,i);
        b = n[i]/128;
        printf("%d", b);

    n[i] = n[i]%128;
    b = n[i]/64;
    printf("%d", b);

    n[i] = n[i]%64;
    b = n[i]/32;
    printf("%d", b);

    n[i] = n[i]%32;
    b = n[i]/16;
    printf("%d", b);

    n[i] = n[i]%16;
    b = n[i]/8;
    printf("%d", b);

    n[i] = n[i]%8;
    b = n[i]/4;
    printf("%d", b);

    n[i] = n[i]%4;
    b = n[i]/2;
    printf("%d", b);

    n[i] = n[i]%2;
    b = n[i]/1;
    printf("%d", b);

    printf("\n"); 
        }
    //}

    return 0;
}

