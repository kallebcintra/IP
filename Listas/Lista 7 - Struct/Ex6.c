#include <stdio.h>
#include <string.h>

typedef struct data
{
    int mat;
    int dn, mn, an;
    char na[200];
} data;

int ComparaDataNasc(data, int dn, int mn, int an);
void OrdenaAlunoss(int dn, int mn, int an);

int main()
{
    int n;
    int i, j;
    data data;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &data.mat);
        scanf("%d %d %d", &data.dn, &data.mn, &data.an);
        gets(data.na);
        OrdenaAlunos();
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", data.mat, data.na, data.dn, data.mn, data.an);
    }

    return 0;
}

void OrdenaAlunoss(int dn, int mn, int an)
{
    int i, j;
    
}