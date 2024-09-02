#include <stdio.h>
#include <math.h> 

int main() {
    double rayon, volume;

    const double PI = 3.141592653589793;

    printf("Entrez le rayon de la sphère : ");
    scanf("%lf", &rayon);

    volume = (4.0/3.0) * PI * pow(rayon, 3);
    printf("Le volume de la sphère est : %.2f\n", volume);

    return 0;
}
