#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct
{
    int numero;
    char nom[50];
    char prenom[50];
    char date_naissance[10];
    char departement[20];
    float note;

} Etudiant;

void ajouter(Etudiant e[], int *nombre_etudiants, int id);
void supprimer_ou_modifier(Etudiant e[], int *nombre_etudiants);
void afficher(Etudiant e[], int *nombre_etudiants);
void calculer_moyenne(Etudiant e[], int *nombre_etudiants);
void statistiques(Etudiant e[], int *nombre_etudiants);
void rechercher(Etudiant e[], int *nombre_etudiants);
void trier(Etudiant e[], int *nombre_etudiants);

#endif