// Incomplete
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int * trj = NULL;
    int tt;
    int i;
    int ip, id;
    int custo = 0;

    scanf("%d", &tt);
    trj = (int *) calloc(tt, sizeof(int));

    for(i = 0; i < tt; i++) scanf("%d", trj+1);

    ip = trj[0];
    for(i = 1; i < tt; i++)
    {
        id = trj[i];
        //
        ip = id;
    }

    printf("%d\n", custo);

finalizar:
    free(trj);

    return 0;
}