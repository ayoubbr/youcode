#include <stdio.h>

int main() {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Vérification du signe du nombre
    if (nombre > 0) {
        printf("Le nombre %d est positif.\n", nombre);
    } else if (nombre < 0) {
        printf("Le nombre %d est négatif.\n", nombre);
    } else {
        printf("Le nombre est égal à zéro.\n");
    }

    return 0;
}
