// Online C compiler to run C program online
#include <stdio.h>

int calculSomme(int entier1, int entier2){
    int somme = entier1+entier2;
    return somme;
}

int main() {
    int entier1,  entier2;
    
    printf("entre l'entier 1 : ");
    scanf("%d", &entier1);
    
    printf("\nentre l'entier 2 : ");
    scanf("%d", &entier2);

    printf("la somme est : %d", calculSomme(entier1, entier2));
        

    return 0;
}