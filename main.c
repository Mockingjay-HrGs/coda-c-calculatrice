#include <stdlib.h>
#include <stdio.h>





int main()
{
	char operateur;
	int resultat;
	double resultat_div;
	int nombre1, nombre2;

    printf("Choisissez un opérateur parmi la liste suivante (+, -, *, /, %%): ");
    scanf(" %c", &operateur);

    printf("Entrez le premier nombre: ");
    scanf("%d", &nombre1);
    printf("Entrez le second nombre: ");
    scanf("%d", &nombre2);

	if (operateur == '+') {
        resultat = nombre1 + nombre2;
        printf("%d %c %d = %d\n", nombre1, operateur, nombre2, resultat);
        
    } else if (operateur == '-') {
        resultat = nombre1 - nombre2;
        printf("%d %c %d = %d\n", nombre1, operateur, nombre2, resultat);
        
    } else if (operateur == '*') {
        resultat = nombre1 * nombre2;
        printf("%d %c %d = %d\n", nombre1, operateur, nombre2, resultat);
        
    } else if (operateur == '/') {
        if (nombre2 == 0) {
            printf("Erreur: Il est impossible de diviser par 0\n");
        } else {
            resultat_div = (double)nombre1 / nombre2;
            printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat_div);
        }
        
    } else if (operateur == '%') {
        if (nombre2 == 0) {
            printf("Erreur: Il est impossible de diviser par 0\n");
        } else {
            resultat = nombre1 % nombre2;
            printf("%d %c %d = %d\n", nombre1, operateur, nombre2, resultat);
        }
        
    } else {
        printf("Opérateur non reconnu\n");
    }

	exit(0);
}	
	
