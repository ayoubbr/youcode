#include<stdio.h>

int main(){

    int NombreElement;
    int inverse;
    printf("le nombre d'entiers dans le tableau: ");
    scanf("%d", &NombreElement);
    int tableau[NombreElement];
    
    for(int i = 0; i<NombreElement;i++){
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // need to understand this 
    printf("Tableau après le tri croissant :\n");
    for (int i = 0; i < NombreElement; i++) {
         for (int j = 0; j < NombreElement - i - 1; j++) {
            if(tableau[j] > tableau[j+1]){
                inverse = tableau[j+1];
                tableau[j+1] = tableau[j];
                tableau[j] = inverse;
            }
        }
    }
     for (int i = 0; i < NombreElement; i++) {
        printf("%d ", tableau[i]);
    }
    

    return 0;

    }