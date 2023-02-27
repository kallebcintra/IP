#include <stdio.h>

int main()
{
    int array1[10][10],i,j,m,n,sum = 0;

    
        scanf("%d", &m);
        if(m > 1000 || m < 1){
        printf("Numero invalido!\n");
        return 0;
    }
        
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &array1[i][j]);
            }
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {

                if(i==j)
                    printf("%d\n", array1[i][j]);    
            }
        }

    return 0;
}
