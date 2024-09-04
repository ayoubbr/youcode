#include <stdio.h>

int main() {

    int age, type_voiture, nombre_accidents;
    double prime_base, prime_finale;

    printf("Entrez l'âge du conducteur (en années) : ");
    scanf("%d", &age);
    
    printf("Entrez le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type_voiture);
    
    printf("Entrez le nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d", &nombre_accidents);

     prime_base = 1000.0; // Exemple de prime de base

    if (age < 25) {
        prime_finale = prime_base * 1.5;
    } else if (age <= 65) {
        prime_finale = prime_base;
    } else {
        prime_finale = prime_base * 1.2;
    }

     switch (type_voiture) {
        case 1: // Sportive
            prime_finale *= 2;
            break;
        case 2: // Utilitaire
            prime_finale *= 1.2;
            break;
        case 3: // Familiale
            prime_finale *= 1.1;
            break;
        default:
            printf("Type de voiture invalide !\n");
            return 1;
    }

    if (nombre_accidents > 1) {
        prime_finale *= 1.3;
    }

      printf("La prime d'assurance finale est de : %.2f euros\n", prime_finale);

    return 0;
}