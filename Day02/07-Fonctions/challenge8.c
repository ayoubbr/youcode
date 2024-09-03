#include <stdio.h>

int pairOuImpaire(int entier){
    int number = 0;
    if((entier % 2) == 0){
        number  =1;
    }
    else
    { 
        number = 0;
    }
    
    return number;
}

int main() {
    int entier;
    scanf("%d", &entier);
    printf("resulat : %d",  pairOuImpaire(entier));
   
    return 0;
}
