#include "headers.h"
char titre_livre[MAX_LIVRES][MAX_TITRE];
char auteur_livre[MAX_LIVRES][MAX_TITRE];
float prix_livre[MAX_LIVRES];
int quantite_livre[MAX_LIVRES];
int nombre_livre = 0; 
int choix = 0;
 // Initialisation à 0
int main()
{

    // char titre_livre[MAX_LIVRES][MAX_TITRE];
    // char auteur_livre[MAX_LIVRES][MAX_TITRE];
    // float prix_livre[MAX_LIVRES];
    // int quantite_livre[MAX_LIVRES];

    // int choix = 0;
    // int nombre_livre = 0;

    while (choix != 6)
    {
        printf("\n--- Menu ---\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher la liste des livres\n");
        printf("3. Modifier la quantite d'un livre\n");
        printf("4. Supprimer un livre\n");
        printf("5. Calculer la quantite des livres dans le stock\n");
        printf("6. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        if (choix == 1)
        {
            ajouterLivre(titre_livre, auteur_livre, prix_livre, quantite_livre, nombre_livre);
            nombre_livre++;
        }
        else if (choix == 2)
        {
            afficherLivres(titre_livre, auteur_livre, prix_livre, quantite_livre, nombre_livre);
        }
        else if (choix == 3)
        {
            modifierQuantite(titre_livre, quantite_livre, nombre_livre);
        }
        else if (choix == 4)
        {
            supprimerLivre(titre_livre, auteur_livre, prix_livre, quantite_livre, nombre_livre);
            nombre_livre--;
        }
        else if (choix == 5)
        {
            calcluerStock(quantite_livre, nombre_livre);
        }
        else if (choix == 6)
        {
            printf("Quitter...\n");
        }
        else
        {
            printf("Option invalide. Veuillez réessayer.\n");
        }
    }
    return 0;
}