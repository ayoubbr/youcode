// Online C compiler to run C program online
#include <stdio.h>

int calculMax(int entier1, int entier2){
    int max = 0;
    if(entier1>entier2){
        max = entier1;
    }else 
    max= entier2;
    return max;
}

int main() {
    int entier1,  entier2;
    
    printf("entre l'entier 1 : ");
    scanf("%d", &entier1);
    
    printf("\nentre l'entier 2 : ");
    scanf("%d", &entier2);

    printf("le max est : %d", calculMax(entier1, entier2));
        

    return 0;
}