// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int number;
    printf("entre le numero :");
    scanf("%d", &number);
    
    int tableau[10];
    
    for(int i = 9 ; i >= 0; i--){
        tableau[i] = number * (i+1);
        printf("%d\n", tableau[i]);
    }

    return 0;
}