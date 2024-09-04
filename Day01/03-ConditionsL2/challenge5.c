#include <stdio.h>

int main() {
    int budget, destination, nombre_personnes;

    printf("Entrez le budget en euros : ");
    scanf("%d", &budget);

    printf("Entrez la destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &destination);

    printf("Entrez le nombre de personnes : ");
    scanf("%d", &nombre_personnes);
    
    if (budget >= 1000) {
        printf("Voyage haut de gamme\n");
    } else if (budget >= 500) {
         printf("Voyage moyen\n");
    } else {
        printf("Voyage  économique\n");
    }
    
    if (destination == 1) {
        if (budget >= 1000 && nombre_personnes > 2) {
            printf("Recommandation : Plage\n");
        } else {
            printf("Recommandation : Destination non adéquate pour la plage\n");
        }
    } else if (destination == 2) {
        if (budget >= 500 && nombre_personnes <= 2) {
            printf("Recommandation : Montagne\n");
        } else {
            printf("Recommandation : Destination non adéquate pour la montagne\n");
        }
    } else if (destination == 3) {
        printf("Recommandation : Ville\n");
    } else {
        printf("Destination invalide\n");
    }

    return 0;
}
