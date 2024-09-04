#include <stdio.h>

int main() {
    int a, b, somme;

    printf("Entrez la première valeur : ");
    scanf("%d", &a);

    printf("Entrez la deuxième valeur : ");
    scanf("%d", &b);

    somme = a + b;

    // Vérification si les deux valeurs sont identiques
    if (a == b) {
        somme *= 3;
    }

    printf("Le résultat est : %d\n", somme);

    return 0;
}
