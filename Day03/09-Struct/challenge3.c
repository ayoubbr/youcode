#include <stdio.h>
#include <string.h>

typedef struct 
{
    int largeur;
    int longueur;
}Rectangle;

float air(Rectangle r){
    return r.largeur * r.longueur;
}

int main()
{
    Rectangle rect;

    rect.largeur = 14;
    rect.longueur = 2;
    
    printf("l'aire du rectangle est : %f", air(rect));
   
    return 0;
}