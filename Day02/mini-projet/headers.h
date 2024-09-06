#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <string.h>

#define MAX_LIVRES 200
#define MAX_TITRE 100

extern int nombre_livre;
extern char titre_livre[MAX_LIVRES][MAX_TITRE];
extern char auteur_livre[MAX_LIVRES][MAX_TITRE];
extern float prix_livre[MAX_LIVRES];
extern int quantite_livre[MAX_LIVRES];

extern int choix;

// Prototypes des fonctions
void ajouterLivre(char titre_livre[][MAX_TITRE], char auteur_livre[][MAX_TITRE], float prix_livre[], int quantite_livre[], int nombre_livre);
void afficherLivres(char titre_livre[][MAX_TITRE], char auteur_livre[][MAX_TITRE], float prix_livre[], int quantite_livre[], int nombre_livre);
void modifierQuantite(char titre_livre[][MAX_TITRE], int quantite_livre[], int nombre_livre);
void supprimerLivre(char titre_livre[][MAX_TITRE], char auteur_livre[][MAX_TITRE], float prix_livre[], int quantite_livre[], int nombre_livre);
void calcluerStock(int quantite_livre[], int nombre_livre);
#endif