#include <stdio.h>

void inverse(char chaine[], int taille){
    
    int debut = 0;
    int fin = taille -1;
    char temp;
    while(debut < fin){
        temp = chaine[debut];
        chaine[debut] = chaine[fin];
        chaine[fin] = temp;
        debut++;
        fin--;
    }
 
    
     for(int i =0; i<taille; i++){
        printf("%c", chaine[i]);
    }
    
}

int main() {
    
    char chaine[6] = {'a', 'b', 'c' ,'d', 'e','f'};
     
    inverse(chaine, 6);
    
    return 0;
}
