#include "header.h"

int main()
{
    Contact contacts[MAX_CONTACTS];
    int nbContacts = 0;

    int choix;

    do
    {
        printf("\n--- Menu ---\n");
        printf("______________________\n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer une contact\n");
        printf("4. Afficher la liste des contacts\n");
        printf("5. Rechercher un contact par nom\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: \n");
        printf("_______________________\n");

        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajouterContact(contacts, &nbContacts);
            break;

        case 2:
            modifierContact(contacts, &nbContacts);
            break;

        case 3:
            supprimerContact(contacts, &nbContacts);
            break;

        case 4:
            afficherContacts(contacts, &nbContacts);
            break;

        case 5:
            rechercherContact(contacts, &nbContacts);
            break;

        case 0:
            printf("BYE BYE");
            return 0;
            break;

        default:
            printf("Option not available! \nChoisissez une autre option: ");
            break;
        }
    } while (choix != 0);

    return 0;
}
