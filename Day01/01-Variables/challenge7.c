#include <stdio.h>

int main() {

    float nombre1, nombre2, nombre3;
    int poids1 = 2;
    int poids2 = 3;
    int poids3 = 5;
    
    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);
    
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &nombre2);
    
    printf("Entrez le troisième nombre : ");
    scanf("%f", &nombre3);
    
    float moyenne = (nombre1 * poids1 + nombre2 * poids2 + nombre3 * poids3) / (poids1 + poids2 + poids3);
    printf("La moyenne pondérée est : %f\n", moyenne);
    
    return 0;
}
