#include <stdio.h>

int main() {
    int nombre;
    
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Afficher la table de multiplication
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}
