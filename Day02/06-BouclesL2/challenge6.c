// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int entier;
    int facteurs[]={};
    printf("entier :");
    scanf("%d", &entier);
    
    for(int i = 1; i<= entier; i++){
        if((entier % i) == 0){
            printf("%d\t", i);
        }
    }


    return 0;
}