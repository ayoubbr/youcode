#include "header.h"

int main()
{

    Etudiant e[MAX_STUDENTS];
    int choix = 0;
    int nombre_etudiants = 0;
    int id = 1;

    do
    {
        printf("\n#----------  MENU  ----------#\n");
        printf("-------------------------------\n");
        printf("1. Ajouter un etudiant\n");
        printf("2. Supprimer OU modifier un etudiant\n");
        printf("3. Afficher les details d'un etudiant\n");
        printf("4. Calculer la moyenne generale\n");
        printf("5. Statistiques\n");
        printf("6. Rechercher un etudiant\n");
        printf("7. Trier un etudiant\n");
        printf("0. Quitter\n");
        printf("#-----------------------------#\n");
        printf("Choisissez une option:  ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajouter(e, &nombre_etudiants, id);
            break;

        case 2:
            supprimer_ou_modifier(e, &nombre_etudiants);
            break;

        case 3:
            afficher(e, &nombre_etudiants);
            break;

        case 4:
            calculer_moyenne(e, &nombre_etudiants);
            break;

        case 5:
            statistiques(e, &nombre_etudiants);
            break;

        case 6:
            rechercher(e, &nombre_etudiants);
            break;

        case 7:
            trier(e, &nombre_etudiants);
            break;

        case 0:
            printf("Quitter...");
            return 0;
            break;

        default:

            printf("\nOption not available! Choisissez une autre option.\n");
            break;
        }
    } while (choix != 0);

    return 0;
}