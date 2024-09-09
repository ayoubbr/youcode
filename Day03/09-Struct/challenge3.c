#include <stdio.h>
#include <string.h>

struct Rectangle
{
    int largeur;
    int longueur;
};

float air(struct Rectangle r){
    return r.largeur * r.longueur;
}

int main()
{
    struct Rectangle rect;

    rect.largeur = 14;
    rect.longueur = 2;
    
    printf("l'aire du rectangle est : %f", air(rect));
   
    return 0;
}