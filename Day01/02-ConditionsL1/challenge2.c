#include <stdio.h>

int main() {
    // Déclaration de la variable pour le caractère
    char caractere;

    // Lecture du caractère
    printf("Entrez un caractère : ");
    scanf(" %c", &caractere);

    // Vérification si le caractère est une voyelle
    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("'%c' est une voyelle.\n", caractere);
            break;
        default:
            printf("'%c' n'est pas une voyelle.\n", caractere);
            break;
    }

    return 0;
}
