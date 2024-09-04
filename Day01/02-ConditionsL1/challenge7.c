#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    // Vérification si le caractère est une lettre majuscule
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("Le caractère '%c' est une lettre majuscule.\n", caractere);
    } else {
        printf("Le caractère '%c' n'est pas une lettre majuscule.\n", caractere);
    }

    return 0;
}
