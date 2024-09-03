// Online C compiler to run C program online
#include <stdio.h>

int calculMin(int entier1, int entier2){
    int min = 0;
    if(entier1<entier2){
        min = entier1;
    }else 
    min= entier2;
    return min;
}

int main() {
    int entier1,  entier2;
    
    printf("entre l'entier 1 : ");
    scanf("%d", &entier1);
    
    printf("\nentre l'entier 2 : ");
    scanf("%d", &entier2);

    printf("le min est : %d", calculMin(entier1, entier2));
        

    return 0;
}