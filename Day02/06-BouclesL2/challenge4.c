// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int entier, nombre_inverse;
    printf("entier :");
    scanf("%d", &entier);
    
     while (entier != 0) {
        int chiffre = entier % 10; // Extraire le dernier chiffre
        nombre_inverse = nombre_inverse * 10 + chiffre; // Ajouter ce chiffre au nombre inverse
        entier = entier / 10;              // Supprimer le dernier chiffre du nombre
    }
    
     printf("Le nombre inversé est : %d\n", nombre_inverse);

    return 0;
}