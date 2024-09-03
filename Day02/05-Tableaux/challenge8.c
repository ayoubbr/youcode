#include<stdio.h>

int main(){

    int NombreElement;
   
    printf("le nombre d'entiers dans le tableau: ");
    scanf("%d", &NombreElement);
    
    int tableau[NombreElement];
    int copie[NombreElement];
    
    for(int i = 0; i < NombreElement ;i++){
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Tableau après le copie :\n");
    for (int i = 0; i < NombreElement; i++) {
        copie[i] = tableau[i];
        printf("%d\n", tableau[i]);
    }
    
     for (int i = 0; i < NombreElement; i++) {
         printf("tableau copie : %d\n", copie[i]);
    }

    return 0;

    }