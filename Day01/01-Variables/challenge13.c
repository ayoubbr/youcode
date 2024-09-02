#include <stdio.h>

void afficherBinaire(unsigned int n) {
    int i;
    int bits = sizeof(n) * 8; 

    int debut = 0;
    for (i = bits - 1; i >= 0; i--) {
        if ((n >> i) & 1) {
            debut = 1;
        }
        if (debut) {
            printf("%d", (n >> i) & 1);
        }
    }
    if (!debut) {
        printf("0"); 
    }
}

int main() {
    unsigned int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%u", &nombre);

    printf("En binaire : ");
    afficherBinaire(nombre);
    printf("\n");

    printf("En hexadécimal : %X\n", nombre);

    return 0;
}
