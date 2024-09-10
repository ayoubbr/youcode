#include "header.h"

void ajouterContact(Contact contacts[], int *nbContacts)
{
    if (*nbContacts >= MAX_CONTACTS)
    {
        printf("Le carnet de contacts est plein.\n");
        return;
    }

    printf("Ajout d'un nouveau contact:\n");
    printf("Nom: ");
    scanf(" %s", contacts[*nbContacts].nom);

    printf("Numero de telephone: ");
    scanf(" %s", contacts[*nbContacts].telephone);

    printf("Adresse e-mail: ");
    scanf(" %s", contacts[*nbContacts].email);

    (*nbContacts)++;
    printf("Contact ajoute avec succes !\n");
}

void modifierContact(Contact contacts[], int *nbContacts)
{
    char nomCherche[50];
    printf("Entrez le nom du contact a modifier: ");
    scanf(" %s", nomCherche);
    for (int i = 0; i < *nbContacts; i++)
    {

        if (strcmp(contacts[i].nom, nomCherche) == 0)
        {
            printf("Contact trouve !\n");

            printf("Entrez le nouveau numero de telephone: ");
            scanf(" %s", contacts[i].telephone);

            printf("Entrez la nouvelle adresse e-mail: ");
            scanf(" %s", contacts[i].email);

            printf("Contact modifie avec succes !\n");
            break;
        }
    }
}

void supprimerContact(Contact contacts[], int *nbContacts)
{
    if (*nbContacts == 0)
    {
        printf("Aucun livre disponible pour la suppression.\n");
    }
    else
    {
        char nomCherche[50];
        printf("Entrez le nom du contact a supprimer: ");
        scanf(" %s", nomCherche);

        for (int i = 0; i < *nbContacts; i++)
        {
            if (strcasecmp(contacts[i].nom, nomCherche) == 0)
            {
                printf("Contact trouve : %s\n", contacts[i].nom);
                for (int j = i; j < *nbContacts - 1; j++)
                {
                    contacts[j] = contacts[j + 1];
                }
                (*nbContacts)--;
                printf("Contact supprime avec succes !\n");
                break;
            }
        }
    }
}

void afficherContacts(Contact contacts[], int *nbContacts)
{
    if (*nbContacts == 0)
    {
        printf("Aucun Contact disponible.\n");
    }
    else
    {
        printf("\n--- Liste des Contacts disponibles ---\n");
        for (int i = 0; i < *nbContacts; i++)
        {
            printf("Contact %d:\n", i + 1);
            printf("Nom: %s\n", contacts[i].nom);
            printf("Telephone: %s\n", contacts[i].telephone);
            printf("Email: %s\n", contacts[i].email);
            printf("-----------------------\n");
        }
    }
}

void rechercherContact(Contact contacts[], int *nbContacts)
{
    if (*nbContacts == 0)
    {
        printf("Aucun livre disponible.\n");
    }
    else
    {
        char nomCherche[50];
        printf("Entrez le nom du contact a chercher: ");
        scanf(" %s", nomCherche);

        for (int i = 0; i < *nbContacts; i++)
        {
            if (strcasecmp(contacts[i].nom, nomCherche) == 0)
            {
                printf("Contact %d:\n", i + 1);
                printf("Nom: %s\n", contacts[i].nom);
                printf("Telephone: %s\n", contacts[i].telephone);
                printf("Email: %s\n", contacts[i].email);
                printf("-----------------------\n");
            }
        }
    }
}