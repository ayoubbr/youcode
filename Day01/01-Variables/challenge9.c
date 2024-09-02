#include <stdio.h>
#include <math.h> 

int main() {
    double x1, y1, z1;
    double x2, y2, z2;
    double distance;

    printf("Entrez les coordonnées du premier point (x1, y1, z1) :\n");
    printf("x1 : ");
    scanf("%lf", &x1);
    printf("y1 : ");
    scanf("%lf", &y1);
    printf("z1 : ");
    scanf("%lf", &z1);

    printf("Entrez les coordonnées du deuxième point (x2, y2, z2) :\n");
    printf("x2 : ");
    scanf("%lf", &x2);
    printf("y2 : ");
    scanf("%lf", &y2);
    printf("z2 : ");
    scanf("%lf", &z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("La distance entre les deux points est : %.2f\n", distance);

    return 0;
}
