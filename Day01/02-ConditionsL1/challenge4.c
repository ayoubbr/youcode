#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c;
    double discriminant, racine1, racine2;

    // Lecture des coefficients
    printf("Entrez le coefficient a : ");
    scanf("%lf", &a);
    
    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);
    
    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);

    // Vérification si 'a' est nul pour éviter division par zéro
    if (a == 0) {
        printf("Le coefficient 'a' ne peut pas être nul pour une équation du second degré.\n");
        return 1; 
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        racine1 = (-b + sqrt(discriminant)) / (2 * a);
        racine2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les solutions réelles distinctes sont : %.2f et %.2f\n", racine1, racine2);
    } else if (discriminant == 0) {
        racine1 = -b / (2 * a);
        printf("La solution réelle double est : %.2f\n", racine1);
    } else {
        printf("L'équation n'a pas de solutions réelles.\n");
    }

    return 0;
}
