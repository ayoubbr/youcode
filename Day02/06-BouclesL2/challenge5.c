// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int entier, somme;
    printf("entier :");
    scanf("%d", &entier);
    
    for(int i = 1; i<= entier; i++){
        somme += i;
    }
    
     printf("La somme des nombre est : %d\n", somme);

    return 0;
}