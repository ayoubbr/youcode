#include <stdio.h>
#include <string.h>

const int MAX_LIVRES=200 ;
const  int MAX_TITRE=100;  

int main() {
     
    char titre_livre[MAX_LIVRES][MAX_TITRE];
    char auteur_livre[MAX_LIVRES][MAX_TITRE];
    float prix_livre[MAX_LIVRES];
    int quantite_livre[MAX_LIVRES];

    int choix = 0;
    int nombre_livre = 0;

    while(choix !=6){
        printf("\n--- Menu ---\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher la liste des livres\n");
        printf("3. Modifier la quantite d'un livre\n");
        printf("4. Supprimer un livre\n");
        printf("5. Calculer la quantite des livres dans le stock\n");
        printf("6. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        if(choix == 1){
            if (nombre_livre >= MAX_LIVRES) {
                printf("Le stock est plein. Impossible d'ajouter plus de livres.\n");
            
            } else {
                
                printf("Titre du livre: ");
                scanf("%s", &titre_livre[nombre_livre]);

                printf("Auteur du livre: ");
                scanf("%s", &auteur_livre[nombre_livre]);

                printf("Prix du livre: ");
                scanf("%f", &prix_livre[nombre_livre]);

                printf("Quantite du livre: ");
                scanf("%d", &quantite_livre[nombre_livre]); 

                nombre_livre++;
                printf("Livre ajouté avec succès !\n");
            }
        } else if(choix == 2){
            if (  nombre_livre == 0) {
                printf("Aucun livre disponible dans le stock.\n");
            } else {
                // Afficher tous les livres disponibles
                printf("\n--- Liste des livres disponibles ---\n");
                for (int i = 0; i <   nombre_livre; i++) {
                    printf("Livre %d:\n", i + 1);
                    printf("Titre: %s\n", titre_livre[i]);
                    printf("Auteur: %s\n", auteur_livre[i]);
                    printf("Prix: %.2f\n", prix_livre[i]);
                    printf("Quantité: %d\n", quantite_livre[i]);
                    printf("-----------------------\n");
                }
            }
        }else if (choix == 3) {
            if (nombre_livre == 0) {
                printf("Aucun livre disponible pour la mise à jour.\n");
            } else {
                // Mettre à jour la quantité d'un livre
                char titreRecherche[MAX_TITRE];
                int trouve = 0;

                printf("Entrez le titre du livre pour modifier la quantité: ");
                scanf("%s", titreRecherche);

                // Parcourir les livres pour trouver celui à mettre à jour
                for (int i = 0; i < nombre_livre; i++) {
                    if (strcasecmp(titre_livre[i], titreRecherche) == 0) {
                        printf("Livre trouvé : %s\n", titre_livre[i]);
                        printf("Ancienne quantité: %d\n", quantite_livre[i]);
                        printf("Nouvelle quantité: ");
                        scanf("%d", &quantite_livre[i]);
                        printf("Quantité mise à jour avec succès !\n");
                        trouve = 1;
                        break;
                    }
                }

                if (!trouve) {
                    printf("Livre non trouvé dans le stock.\n");
                }
            }
        }else if (choix == 4) {
            if (nombre_livre == 0) {
                printf("Aucun livre disponible pour la mise à jour.\n");
            } else {
                // Supprimer un livre
                char titreRecherche[MAX_TITRE];
                int trouve = 0;

                printf("Entrez le titre du livre pour supprimer: ");
                scanf("%s", titreRecherche);

                // Parcourir les livres pour trouver celui a supprimer
                for (int i = 0; i < nombre_livre -1; i++) {
                    if (strcasecmp(titre_livre[i], titreRecherche) == 0) {
                        printf("Livre trouvé : %s\n", titre_livre[i]);
                         for (int j = i; j < nombre_livre - 1; j++) {
                            strcpy(titre_livre[j], titre_livre[j + 1]);
                            strcpy(auteur_livre[j], auteur_livre[j + 1]);
                            prix_livre[j] = prix_livre[j + 1];
                            quantite_livre[j] = quantite_livre[j + 1];
                        }
                        nombre_livre--;
                        printf("Livre supprimé avec succès !\n");
                        trouve = 1;
                        break;
                    }
                }

                if (!trouve) {
                    printf("Livre non trouvé dans le stock.\n");
                }
            }
        }else if (choix == 5){
            // nombre total de livres en stock
             if (nombre_livre == 0) {
                printf("Aucun livre disponible.\n");
            } else {
                long nombre_total = 0;
                
                // Parcourir pour calculer le nombre total des livres dans le stock
                for (int i = 0; i < nombre_livre ; i++) {
                    nombre_total += quantite_livre[i];
                }
                printf("Nombre total des Livres dans le stock est :%d \n", nombre_total);
            }
        }else if (choix == 6) {
            printf("Quitter...\n");
        } else {
            printf("Option invalide. Veuillez réessayer.\n");
        }
    }
    return 0;
}