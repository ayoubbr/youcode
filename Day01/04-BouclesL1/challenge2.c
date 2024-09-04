#include <stdio.h>

int main() {
    int n;
    unsigned long long factorielle = 1; // Utilisation d'un type plus grand pour éviter le dépassement de capacité

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    // Vérifier que le nombre est positif
    if (n < 0) {
        printf("La factorielle n'est pas définie pour les nombres négatifs.\n");
    } else {
        // Calculer la factorielle
        for (int i = 1; i <= n; i++) {
            factorielle *= i;
        }

        printf("%d! = %llu\n", n, factorielle);
    }

    return 0;
}
