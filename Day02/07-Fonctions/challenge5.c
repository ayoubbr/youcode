// Online C compiler to run C program online
#include <stdio.h>

int calculFac(int entier){
    int factoriel = 1;
    if(entier == 0){
        factoriel = 1;
    }else {
        for(int i = entier; i > 0; i--){
          factoriel = factoriel * i;
        }
    }
   
    return factoriel;
}

int main() {
    int entier;
    
    printf("entre l'entier  : ");
    scanf("%d", &entier);
    
    printf("le factoriel de %d est : %d", entier, calculFac(entier));

    return 0;
}