// Online C compiler to run C program online
#include <stdio.h>

double calculProduit(int entier1, int entier2){
    double produit = entier1*entier2;
    return produit;
}

int main() {
    int entier1,  entier2;
    
    printf("entre l'entier 1 : ");
    scanf("%d", &entier1);
    
    printf("\nentre l'entier 2 : ");
    scanf("%d", &entier2);

    printf("le produit est : %.0lf", calculProduit(entier1, entier2));
        

    return 0;
}