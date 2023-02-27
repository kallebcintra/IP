// Incompleto (valores de mesma frequência)
#include<stdio.h>

#define k 100000

void getMaxRepeatingElement(int V[], int n)
{
    int i, j;
    int num = 0, maxcount = 0;
    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (V[i] == V[j]) {
                count++;
            }
        }
        if (count > maxcount) {
            maxcount = count;
            num = V[i];
        }
    }
    printf("%d\n%d\n", num, maxcount);
}

int main()
{
    int V[k];
    int n;
    int i, j, l;

    scanf("%d", &n);

    if(n > 1000000){
        printf("Número invalido\n");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d%*c", &V[i]);
        if(V[i] > 100 || V[i] < 0) break;
    }

    getMaxRepeatingElement(V,n);

    return 0;
}