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
        resultat = nombre1 + nombre2;
        printf("Résultat de l'addition: %d\n", resultat);
        
    } else if (operateur == '-') {
        resultat = nombre1 - nombre2;
        printf("Résultat de la soustraction: %d\n", resultat);
        
    } else if (operateur == '*') {
        resultat = nombre1 * nombre2;
        printf("Résultat de la multiplication: %d\n", resultat);
        
    } else if (operateur == '/') {
        if (nombre2 == 0) {
            printf("Erreur: Il est impossible de diviser par 0\n");
        } else {
            resultat_div = (double)nombre1 / nombre2;
            printf("Résultat de la division: %.2lf\n", resultat_div);
        }
        
    } else if (operateur == '%') {
        if (nombre2 == 0) {
            printf("Erreur: Il est impossible de diviser par 0\n");
        } else {
            resultat = nombre1 % nombre2;
            printf("Résultat du modulo: %d\n", resultat);
        }
        
    } else {
        printf("Opérateur non reconnu\n");
    }




	exit(0);
}	
	
