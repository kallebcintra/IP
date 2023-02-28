#include <stdio.h>
#include <string.h>
// Utiliza a biblioteca string.h

int main()
{
	//Iniciando Variavel.
	char str[257];
	int i, j, len=0;
  int a = 0, e = 0, I = 0, o = 0, u = 0;
	
	//Pegando input do usuário.
	gets(str);
	len = strlen(str);

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
			  for(j=i; j<len; j++) {
          //Criando string sem as vogais.
				  str[j]=str[j+1];
			  }
			i--;
		  len--;
		  }

		str[len+1]='\0';
	}
	
	printf("%s\n",str);
  printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d\n", a, e, I, o, u);
    
  return 0;	
}