#include<stdio.h>

int main(){

    int NombreElement;

    printf("le nombre d'entiers dans le tableau: ");
    scanf("%d", &NombreElement);
    
    int tableau[NombreElement];

    
    for(int i = 0; i < NombreElement ;i++){
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }
    int debut = 0;
    int fin = NombreElement - 1;
    while (debut < fin) {
        // Échanger les éléments aux positions debut et fin
        int temp = tableau[debut];
        tableau[debut] = tableau[fin];
        tableau[fin] = temp;
        
        // Avancer les indices
        debut++;
        fin--;
    }
  
    
     for (int i = 0; i < NombreElement; i++) {
         printf("tableau inverse : %d\n", tableau[i]);
    }

    return 0;

    }