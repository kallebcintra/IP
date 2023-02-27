// Doesn't Work

#include <stdio.h>
#include <string.h>

typedef struct natal
{
    char str[100];
} natal;

void tradutor(char str);

int main()
{
    int i, j, x;
    natal natal;

    while(natal.str != EOF)
    {
        gets(natal.str);
        tradutor(natal.str);
    }

    return 0;
}

void tradutor(char str)
{
    int i, j, x;
    natal natal;

    if(natal.str == 'brasil' || natal.str == 'portugal') printf("Feliz Natal!\n");
        else if(natal.str == 'espanha'||natal.str == 'argentina'||natal.str == 'chile'||natal.str == 'mexico') printf("Feliz Navidad!\n");
        else if(natal.str=='estados-unidos'||natal.str=='australia'||natal.str=='inglaterra'||natal.str=='antartida'||natal.str=='canada')
            printf("Merry Christmas!\n");
        else if(natal.str == 'siria' || natal.str == 'marrocos') printf("Milad Mubarak!\n");
        else if(natal.str == 'italia' || natal.str == 'libia') printf("Buon Natale!\n");
        else if(natal.str == 'alemanha') printf("Frohliche Weihnachten!\n");
        else if(natal.str == 'austria') printf("Frohe Weihnacht!\n");
        else if(natal.str == 'coreia') printf("Chuk Sung Tan!\n");
        else if(natal.str == 'grecia') printf(" Kala Christougena!\n");
        else if(natal.str == 'suecia') printf("God Jul!\n");
        else if(natal.str == 'turquia') printf("Mutlu Noeller!\n");
        else if(natal.str == 'irlanda') printf("Nollaig Shona Dhuit!\n");
        else if(natal.str == 'belgica') printf("Zalig Kerstfeest!\n");
        else if(natal.str == 'japao') printf(" Merii Kurisumasu!\n");
        else printf("-– NOT FOUND —\n");

}