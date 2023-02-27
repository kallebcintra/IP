#include <stdio.h>
#include <string.h>

#define l 10

int defineNumber(char str[]);

int main()
{
    char str[l];
    int n;
    int i, j, x;

    scanf("%d\n", &n);
    if(n > 1000) return 0;

    for(i = 0; i < n; i++)
    {
        gets(str);
        x = defineNumber(str);
        printf("%d\n", x);
    }

    return 0;
}

int defineNumber(char str[])
{
    int i;
    int num;

    for(i = 0; str[i]; i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            if(str[i] == 'o' && str[i+1] == 'n' || str[i] == 'n' && str[i+1] == 'e' || str[i] == 'o' && str[i+2] == 'e') num = 1;
            else if(str[i] == 't' && str[i+1] == 'w' || str[i] == 'w' && str[i+1] == 'o' || str[i] == 't' && str[i+2] == 'o') num = 2;
            else if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='r' && str[i+3]=='e' || str[i]=='t' && str[i+1]=='h' && str[i+2]=='r' 
            && str[i+4]=='e' || str[i]=='t' && str[i+1]=='h' && str[i+3]=='e' && str[i+4]=='e' || str[i]=='t' && str[i+2]=='r' && 
            str[i+3]=='e' && str[i+4]=='e' || str[i]=='h' && str[i+1]=='r' && str[i+2]=='e'&& str[i+3] == 'e') num = 3;
        }
    }

    return num; 
}

