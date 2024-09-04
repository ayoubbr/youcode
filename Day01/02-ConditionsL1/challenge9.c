#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    // Vérification si le caractère est un alphabet
    if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z')) {
        // Le caractère est un alphabet
        if (caractere >= 'A' && caractere <= 'Z') {
            printf("Le caractère '%c' est une lettre majuscule.\n", caractere);
        } else {
            printf("Le caractère '%c' est une lettre minuscule.\n", caractere);
        }
    } else {
        // Le caractère n'est pas un alphabet
        printf("Le caractère '%c' n'est pas une lettre de l'alphabet.\n", caractere);
    }

    return 0;
}
