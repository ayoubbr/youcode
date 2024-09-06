#include "headers.h"

void ajouterLivre(char titre_livre[][MAX_TITRE], char auteur_livre[][MAX_TITRE], float prix_livre[], int quantite_livre[], int nombre_livre)
{
    if (nombre_livre >= MAX_LIVRES)
    {
        printf("Le stock est plein. Impossible d'ajouter plus de livres.\n");
    }
    else
    {
        printf("Titre du livre: ");
        scanf("%s", titre_livre[nombre_livre]);

        printf("Auteur du livre: ");
        scanf("%s", auteur_livre[nombre_livre]);

        printf("Prix du livre: ");
        scanf("%f", &prix_livre[nombre_livre]);

        printf("Quantite du livre: ");
        scanf("%d", &quantite_livre[nombre_livre]);

        printf("Livre ajouté avec succès !\n");
    }
}

void afficherLivres(char titre_livre[][MAX_TITRE], char auteur_livre[][MAX_TITRE], float prix_livre[], int quantite_livre[], int nombre_livre)
{
    if (nombre_livre == 0)
    {
        printf("Aucun livre disponible dans le stock.\n");
    }
    else
    {
        printf("\n--- Liste des livres disponibles ---\n");
        for (int i = 0; i < nombre_livre; i++)
        {
            printf("Livre %d:\n", i + 1);
            printf("Titre: %s\n", titre_livre[i]);
            printf("Auteur: %s\n", auteur_livre[i]);
            printf("Prix: %.2f\n", prix_livre[i]);
            printf("Quantité: %d\n", quantite_livre[i]);
            printf("-----------------------\n");
        }
    }
}

void modifierQuantite(char titre_livre[][MAX_TITRE], int quantite_livre[], int nombre_livre)
{
    if (nombre_livre == 0)
    {
        printf("Aucun livre disponible pour la mise à jour.\n");
    }
    else
    {
        char titreRecherche[MAX_TITRE];
        int trouve = 0;

        printf("Entrez le titre du livre pour modifier la quantité: ");
        scanf("%s", titreRecherche);

        for (int i = 0; i < nombre_livre; i++)
        {
            if (strcmp(titre_livre[i], titreRecherche) == 0)
            {
                printf("Livre trouvé : %s\n", titre_livre[i]);
                printf("Ancienne quantité: %d\n", quantite_livre[i]);
                printf("Nouvelle quantité: ");
                scanf("%d", &quantite_livre[i]);
                printf("Quantité mise à jour avec succès !\n");
                trouve = 1;
                break;
            }
        }

        if (!trouve)
        {
            printf("Livre non trouvé dans le stock.\n");
        }
    }
}

void supprimerLivre(char titre_livre[][MAX_TITRE], char auteur_livre[][MAX_TITRE], float prix_livre[], int quantite_livre[], int nombre_livre)
{
    if (nombre_livre == 0)
    {
        printf("Aucun livre disponible pour la suppression.\n");
    }
    else
    {
        char titreRecherche[MAX_TITRE];
        int trouve = 0;

        printf("Entrez le titre du livre pour supprimer: ");
        scanf("%s", titreRecherche);

        for (int i = 0; i < nombre_livre; i++)
        {
            if (strcmp(titre_livre[i], titreRecherche) == 0)
            {
                printf("Livre trouvé : %s\n", titre_livre[i]);
                for (int j = i; j < nombre_livre - 1; j++)
                {
                    strcpy(titre_livre[j], titre_livre[j + 1]);
                    strcpy(auteur_livre[j], auteur_livre[j + 1]);
                    prix_livre[j] = prix_livre[j + 1];
                    quantite_livre[j] = quantite_livre[j + 1];
                }
                printf("Livre supprimé avec succès !\n");
                trouve = 1;
                break;
            }
        }

        if (!trouve)
        {
            printf("Livre non trouvé dans le stock.\n");
        }
    }
}

void calcluerStock(int quantite_livre[], int nombre_livre)
{
    if (nombre_livre == 0)
    {
        printf("Aucun livre disponible.\n");
    }
    else
    {
        long nombre_total = 0;

        for (int i = 0; i < nombre_livre; i++)
        {
            nombre_total += quantite_livre[i];
        }
        printf("Nombre total des Livres dans le stock est :%d \n", nombre_total);
    }
}