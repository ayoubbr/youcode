#include<stdio.h>

int main(){

    int NombreElement;
    scanf("%d", &NombreElement);
    
    int tableau[NombreElement];
    
    for(int i = 0; i<NombreElement;i++){
    printf("element %d: ", i + 1)
    scanf("%d", &tableau[i]);
    }
   
    for(int i = 0; i<NombreElement;i++){
    printf("%d\n", tableau[i]);
    }
    
    return 0;


}