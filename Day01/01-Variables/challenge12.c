#include <stdio.h>

int main() {
    int nombre;
    
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);
    
    int chiffre1 = nombre / 1000;            
    int chiffre2 = (nombre / 100) % 10;      
    int chiffre3 = (nombre / 10) % 10;       
    int chiffre4 = nombre % 10;              
    
    int inverse = chiffre4 * 1000 + chiffre3 * 100 + chiffre2 * 10 + chiffre1;
    
    printf("Le nombre inversé est : %d\n", inverse);
    
    return 0;
}
