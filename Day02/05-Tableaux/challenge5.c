#include<stdio.h>

int main(){

    int NombreElement;
    scanf("%d", &NombreElement);
    int plusPetit;
    int tableau[NombreElement];
    
    for(int i = 0; i<NombreElement;i++){
    scanf("%d", &tableau[i]);
    }
           plusPetit = tableau[0];

    for(int i = 0; i<NombreElement;i++){
       if(tableau[i] < plusPetit){
           plusPetit = tableau[i];
       }
    }
    
    printf("plus petit = %d\n", plusPetit);

    
    return 0;


    }