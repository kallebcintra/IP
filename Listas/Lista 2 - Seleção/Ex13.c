#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, r;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    if(n1>n2 && n1>n3 && n1>n4) r = n2 + n3 + n4;
    else if(n2>n1 && n2>n3 && n2>n4) r = n1 + n3 + n4;
    else if(n3>n1 && n3>n2 && n3>n4) r = n1 + n2 + n4;
    else r = n1 + n2 + n3;

    printf("%d\n", r);

    return 0;
}