#include <stdio.h>

int main() {
    int total_jours_accordes, jours_utilises, statut_employe;
    int jours_restants;
    
    printf("Entrez le nombre total de jours de congés accordés: ");
    scanf("%d", &total_jours_accordes);

    printf("Entrez le nombre de jours de congés utilisés: ");
    scanf("%d", &jours_utilises);

    printf("Entrez le statut de l'employé (0 pour temps partiel, 1 pour temps plein): ");
    scanf("%d", &statut_employe);
    
     if (statut_employe == 1) { // Temps plein
        jours_restants = total_jours_accordes - jours_utilises;
    } else if (statut_employe == 0) { // Temps partiel
        jours_restants = (total_jours_accordes / 2) - jours_utilises;
    } else {
        printf("Statut de l'employé invalide.\n");
        return 1; // Fin du programme en cas d'erreur de statut
    }
    
        if (jours_restants < 0) {
        printf("Alerte : Vous avez utilisé plus de jours que ceux qui vous ont été accordés.\n");
    } else {
        printf("Il vous reste %d jours de congés.\n", jours_restants);
    }

    return 0;
}