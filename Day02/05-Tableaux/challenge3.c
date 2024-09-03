#include<stdio.h>

int main(){

    int NombreElement;
    scanf("%d", &NombreElement);
    int total = 0;
    int tableau[NombreElement];
    
    for(int i = 0; i<NombreElement;i++){
    scanf("%d", &tableau[i]);
    }
   
    for(int i = 0; i<NombreElement;i++){
        total +=tableau[i];
    }
    
    printf("total = %d\n", total);

    
    return 0;


    }