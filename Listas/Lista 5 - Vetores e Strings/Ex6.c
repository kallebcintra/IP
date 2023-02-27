#include <stdio.h>
#include <string.h>

#define c 10000

void stringcount(char s[]);

int main()
{
    char s[c];
    int nl, i, j;

    scanf("%d\n", &nl);

    for(i = 0; i < nl; i++)
    {
        gets(s);
        stringcount(s);
    }

    return 0;
}

void stringcount(char s[])
{
    int i, vowels=0, consonants=0;
    int x;

	for(i=0; s[i]; i++)  
    {
    	if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
    	{
		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
            else
             consonants++;
        }
 
 	}

    x = vowels + consonants;
   
    printf("Letras = %d\n", x);
    printf("Vogais = %d\n",vowels);
    printf("Consoantes = %d\n",consonants);
}