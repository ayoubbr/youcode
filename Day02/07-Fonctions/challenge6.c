#include <stdio.h>

// Fonction pour calculer le n-ième terme de la suite de Fibonacci
int fibonacci(int n) {
    if (n < 0) {
        return -1; // Erreur pour les valeurs négatives
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    int a = 0; // F(0)
    int b = 1; // F(1)
    int c;
    
    for (int i = 2; i <= n; i++) {
        c = a + b; // F(i) = F(i-1) + F(i-2)
        a = b;     // Déplacer F(i-1) à F(i-2)
        b = c;     // Déplacer F(i) à F(i-1)
    }
    
    return c;
}

int main() {
    int n;
    
    // Demander à l'utilisateur de saisir l'indice n
    printf("Entrez l'indice n pour calculer le terme n-ième de la suite de Fibonacci: ");
    scanf("%d", &n);
    
    // Calculer le n-ième terme de Fibonacci
    int resultat = fibonacci(n);
    
    // Afficher le résultat
    if (resultat == -1) {
        printf("Erreur : L'indice ne peut pas être négatif.\n");
    } else {
        printf("Le terme %d de la suite de Fibonacci est : %d\n", n, resultat);
    }
    
    return 0;
}
