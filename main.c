#include <stdlib.h>
#include <stdio.h>





int main()
{
    char operateur;
    double nombre1, nombre2, resultat;

    printf("Choisissez un opérateur parmi la liste suivante (+, -, *, /, %%): ");
    scanf(" %c", &operateur);

    printf("Entrez le premier nombre: ");
    scanf("%lf", &nombre1);
    printf("Entrez le second nombre: ");
    scanf("%lf", &nombre2);

	if (operateur == '+') {
        printf("addition\n");
    } else if (operateur == '-') {
        printf("soustraction\n");
    } else if (operateur == '*') {
        printf("multiplication\n");
    } else if (operateur == '/') {
        printf("division\n");
    } else if (operateur == '%') {
        printf("modulo\n");
    } else {
        printf("Opérateur non reconnu\n");
    }




	exit(0);
}	
	
