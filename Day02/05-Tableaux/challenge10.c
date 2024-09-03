#include<stdio.h>

int main(){

    int NombreElement;

    printf("le nombre d'entiers dans le tableau: ");
    scanf("%d", &NombreElement);
    
    int tableau[NombreElement];
    int elementCherche;
    printf("element cherche est :");
    scanf("%d", &elementCherche);

    
    for(int i = 0; i < NombreElement ;i++){
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }
    int i = 0;
    int fin = NombreElement - 1;
    
    while (i < fin) {
        if(tableau[i] == elementCherche){
         printf("lement cherche a ete trouve :%d", tableau[i]);
        }else{
            printf("element pas trouve");
        }
        i++;
    }

    return 0;

    }