#include <stdio.h>

int main() {
    int n;
   
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    // Vérifier que le nombre est positif
    if (n < 1) {
        printf("Veuillez entrer un nombre entier positif.\n");
    }

    printf("LES nombres premiers impaires jusqu'a %d sont  :\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d", 2 * i + 1);
        if (i < n - 1) {
            printf(", ");
        }
    }

    

    return 0;
}
