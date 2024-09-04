// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int Revenu , Score , Duree;
    printf("Entre le revenu, le score de credit,  la duree en cet ordre :");
    scanf("%d, %d , %d", &Revenu, &Score, &Duree);

    if(Revenu >= 30000 && Score >= 700 &&  Duree <= 10){
            printf("Éligible");
    }
    else if(Revenu >= 30000 && Score >= 650 &&  Duree <= 15){
            printf("Éligible avec conditions");
    }
    else {
            printf("Non Éligible");
    }

    return 0;
}