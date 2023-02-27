#include <stdio.h>

#define N 10000

int tamstring(char * s, int n);
void cripto1(char * s, int n);
void cripto2(char * s, int n);
void cripto3(char * s, int n);

int main()
{
    char s[N];
    int n, i;

    scanf("%d%*c", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%[^\n]%*c", s);

        cripto1(s, tamstring(s, N));
        cripto2(s, tamstring(s, N));
        cripto3(s, tamstring(s, N));

        printf("%s\n", s);
    }

    return 0;
}

int tamstring(char * s, int n)
{
    int i = 0, k = -1;

    for(i = 0; i < n; i++){
        if(s[i] == '\0') break;
        k++;
    }
    return k;
}

void cripto1(char * s, int n)
{
    int i;

    for(i = 0; i <= n; i++){
        if(((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122)) s[i] += 3;
    }
}

void cripto2(char * s, int n)
{
    int i, k;
    char t[N];
    t[n+1] = '\0';
    k = n;

    for(i = 0; i <= n; i++){
        t[k] = s[i];
        k--;
    }
    for(i = 0; i <= n; i++){
        s[i] = t[i];
    }
}

void cripto3(char * s, int n)
{
    int z, i;
    z = n%2;
    z = (n+1)/2;

    for(i = z; i <= n; i++){
        s[i] -= 1;
    }
}