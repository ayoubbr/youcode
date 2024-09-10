#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

typedef struct
{
    char nom[50];
    char telephone[15];
    char email[50];
} Contact;

void ajouterContact(Contact contacts[], int *nbContacts);
void modifierContact(Contact contacts[], int *nbContacts);
void supprimerContact(Contact contacts[], int *nbContacts);
void afficherContacts(Contact contacts[], int *nbContacts);
void rechercherContact(Contact contacts[], int *nbContacts);


#endif