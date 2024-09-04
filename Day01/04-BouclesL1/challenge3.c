#include <stdio.h>

int main() {
    int n;
    int somme = 0;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    // Vérifier que le nombre est positif
    if (n < 1) {
        printf("Veuillez entrer un nombre entier positif.\n");
    } else {
        // Calculer la somme des n premiers nombres naturels
        for (int i = 1; i <= n; i++) {
            somme += i;
        }

        printf("La somme des %d premiers nombres naturels est : %d\n", n, somme);
    }

    return 0;
}
