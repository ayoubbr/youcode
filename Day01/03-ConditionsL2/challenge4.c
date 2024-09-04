#include <stdio.h>

int main() {
    int score, anciennete, recompenses;
    double bonus = 0.0;
    
    printf("Entrez le score de performance (0 à 100) : ");
    scanf("%d", &score);

    printf("Entrez l'ancienneté (en années) : ");
    scanf("%d", &anciennete);

    printf("Entrez le nombre de récompenses reçues (0, 1, ou 2+) : ");
    scanf("%d", &recompenses);
    
     if (score >= 90 && anciennete >= 5) {
        printf("Évaluation : Excellente\n");
    } else if (score >= 75 && anciennete >= 3) {
        printf("Évaluation : Bonne\n");
    } else if (score >= 50 && anciennete < 3) {
        printf("Évaluation : Satisfaisante\n");
    } else {
        printf("Évaluation : Insuffisante\n");
    }
    
    if (recompenses == 1) {
        bonus = 0.10;  // 10% de bonus
    } else if (recompenses >= 2) {
        bonus = 0.20;  // 20% de bonus
    }

    printf("Bonus : %.2f%%\n", bonus * 100);

    return 0;
}