#include <stdio.h>

#define JOURS_PAR_AN 365
#define MOIS_PAR_AN 12
#define JOURS_PAR_MOIS 30
#define HEURES_PAR_JOUR 24
#define MINUTES_PAR_HEURE 60
#define SECONDES_PAR_MINUTE 60

int main() {
    // Déclaration de la variable pour l'année et le choix du menu
    int annee, choix;
    int jours, mois, heures, minutes, secondes;

    // Affichage du menu
    do {
        printf("\nMenu de conversion de l'année\n");
        printf("1. Convertir en mois\n");
        printf("2. Convertir en jours\n");
        printf("3. Convertir en heures\n");
        printf("4. Convertir en minutes\n");
        printf("5. Convertir en secondes\n");
        printf("6. Quitter\n");
        printf("Choisissez une option (1-6) : ");
        scanf("%d", &choix);

        if (choix >= 1 && choix <= 5) {
            // Lecture de l'année
            printf("Entrez le nombre d'années : ");
            scanf("%d", &annee);
        }

        switch (choix) {
            case 1:
                // Convertir en mois
                mois = annee * MOIS_PAR_AN;
                printf("%d année(s) = %d mois\n", annee, mois);
                break;

            case 2:
                // Convertir en jours
                jours = annee * JOURS_PAR_AN;
                printf("%d année(s) = %d jours\n", annee, jours);
                break;

            case 3:
                // Convertir en heures
                heures = annee * JOURS_PAR_AN * HEURES_PAR_JOUR;
                printf("%d année(s) = %d heures\n", annee, heures);
                break;

            case 4:
                // Convertir en minutes
                minutes = annee * JOURS_PAR_AN * HEURES_PAR_JOUR * MINUTES_PAR_HEURE;
                printf("%d année(s) = %d minutes\n", annee, minutes);
                break;

            case 5:
                // Convertir en secondes
                secondes = annee * JOURS_PAR_AN * HEURES_PAR_JOUR * MINUTES_PAR_HEURE * SECONDES_PAR_MINUTE;
                printf("%d année(s) = %d secondes\n", annee, secondes);
                break;

            case 6:
                // Quitter le programme
                printf("Quitter le programme.\n");
                break;

            default:
                // Choix invalide
                printf("Choix invalide. Veuillez entrer un nombre entre 1 et 6.\n");
                break;
        }
    } while (choix != 6);

    return 0;
}
