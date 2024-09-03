#include<stdio.h>

int main(){

    int NombreElement;
    scanf("%d", &NombreElement);
    int plusGrand = 0;
    int tableau[NombreElement];
    
    for(int i = 0; i<NombreElement;i++){
    scanf("%d", &tableau[i]);
    }
   
    for(int i = 0; i<NombreElement;i++){
       if(tableau[i] > plusGrand){
           plusGrand = tableau[i];
       }
    }
    
    printf("plus grand = %d\n", plusGrand);

    
    return 0;


    }