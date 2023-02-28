// INCOMPLETO

#include <stdio.h>
#include <stdlib.h>


typedef struct twitter{
    int u1, u2;
    int num_likes;
    int num_retweets;
    int num_mencoes;
} Twitter;

int main()
{
    int i, j, k;
    int n, m, d;
    Twitter **matrix = NULL;
    int slots = 0;
    double medlike, medret, medmen;
    int likes;

    scanf("%d", &n);
    matrix = (Twitter **) malloc( n*sizeof(Twitter *) );

    scanf("%d", &m);
    for(i = 0; i < n; i++)
    {
        matrix = (Twitter **) malloc( m*sizeof(Twitter*) );
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d %d %d %d %d%*c", &((matrix[i][j].u1)), &(matrix[i][j].u2), &(matrix[i][j].num_likes), &(matrix[i][j].num_retweets), &(matrix[i][j].num_mencoes));
        }
    }

    for(i = 0; i < n; i++)
    {
        {
            printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", matrix[i][j].u1, matrix[i][j].num_likes, matrix[i][j].num_retweets, matrix[i][j].num_mencoes);
            if(matrix == NULL) slots++;
        }
    }
    printf("Slots vazios: %d", slots);

    for(i=0; matrix[i] != NULL; i++ ) {
        free( matrix[i] );
    }
    free( matrix );

    exit(1);
}