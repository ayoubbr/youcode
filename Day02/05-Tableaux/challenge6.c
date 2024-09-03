#include<stdio.h>

int main(){

    int NombreElement;
    scanf("%d", &NombreElement);
    int facteur;
     printf("facteur  =  ");
     scanf("%d", &facteur);
    int tabResultant[NombreElement];
    int tableau[NombreElement];
    
    for(int i = 0; i<NombreElement;i++){
         printf("Élément %d: ", i + 1);
    scanf("%d", &tableau[i]);
    }

     printf("Tableau après multiplication par %d:\n", facteur);
    for (int i = 0; i < NombreElement; i++) {
        tableau[i] *= facteur; 
        printf("%d ", tableau[i]);
    }

    return 0;

    }