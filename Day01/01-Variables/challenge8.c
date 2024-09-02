#include <stdio.h>
#include <math.h> 

int main() {
    
    double a, b, c;

    printf("Entrez le premier nombre : ");
    scanf("%lf", &a);
    
    printf("Entrez le deuxième nombre : ");
    scanf("%lf", &b);
    
    printf("Entrez le troisième nombre : ");
    scanf("%lf", &c);
    
    double moyenne_geometrique = pow(a * b * c, 1.0/3.0);
    
    printf("La moyenne géométrique est : %f\n", moyenne_geometrique);
    
    return 0;
}
