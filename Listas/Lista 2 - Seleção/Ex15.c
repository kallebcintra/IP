#include <stdio.h>

int main()
{
    int CC, DR, RT;
    int x;

    scanf("%d %d %d", &CC, &DR, &RT);

    if(CC < 7 && DR > 50 && RT > 80000) x = 10;
    else if(CC < 7 && DR > 50 && RT <= 80000) x = 9;
    else if(CC < 7 && DR <= 50 && RT <= 80000) x = 8;
    else x = 7;

    printf("ACO DE GRAU = %d\n", x);

    return 0;
}