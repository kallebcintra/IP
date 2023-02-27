// Doesn't Work
#include <stdio.h>
#include <string.h>

#define N 256

char str_clean(int str, int clr);

int main()
{
    char str[N]; // string original
    char clr[N]; // lista de caracteres indesejados
    char x;

    scanf("%[^\n]", str);
    scanf("\n%[^\n]", clr);

    x = str_clean(&str, clr);

    printf("%s\n", x);

    return 0;
}

char str_clean(int str, int clr)
{
    int *i, *j, *len=0;
    int a = 0, e = 0, I = 0, o = 0, u = 0;

    len=strlen(str);

    for(i=0; i<len; i++)
	{   
	    //Checando Vogais.
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
            if(str[i] == 'a' || str[i] == 'A') a++;
            if(str[i] == 'e' || str[i] == 'E') e++;
            if(str[i] == 'i' || str[i] == 'I') I++;
            if(str[i] == 'o' || str[i] == 'O') o++;
            if(str[i] == 'u' || str[i] == 'U') u++;
		    
		    //Deletando Vogais. 
			for(j=i; j<len; j++)
			{
			    //Criando string sem as vogais.
				str[j]=str[j+1];
			}
			i--;
		    len--;
		}
		str[len+1]='\0';
	}

    return str;
}