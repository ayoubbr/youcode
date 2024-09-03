#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    // Demander à l'utilisateur de saisir un entier
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    // Vérifier et afficher tous les nombres premiers de 1 à n
    for (int i = 2; i <= n; i++) {
        bool est_premier = true;

        // Vérifier si le nombre i est premier
        if (i <= 1) {
            est_premier = false;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    est_premier = false;
                    break;
                }
            }
        }

        // Afficher le nombre s'il est premier
        if (est_premier) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

/* Explication détaillée
    Déclaration de la variable est_premier :

 
    Copier le code
    bool est_premier = true;
    Une variable booléenne est_premier est initialisée à true. Cela suppose par défaut que le nombre i est premier jusqu'à ce que nous trouvions une preuve du contraire.
    Vérification des cas de base :


    Copier le code
    if (i <= 1) {
    est_premier = false;
    }
    Si i est inférieur ou égal à 1 (i <= 1), le nombre n'est pas premier. Par définition, les nombres premiers sont des entiers positifs supérieurs à 1. Par conséquent, nous définissons est_premier à false.
    Vérification des facteurs possibles :


    Copier le code
    else {
    for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                est_premier = false;
                break;
            }
        }
    }
    Si i est supérieur à 1, nous procédons à une vérification plus approfondie.
    Nous utilisons une boucle for pour tester les diviseurs possibles de i. La boucle commence à j = 2 et continue tant que j * j est inférieur ou égal à i. L'utilisation de j * j <= i au lieu de j <= i permet de réduire le nombre de tests nécessaires. En effet, si i a un diviseur supérieur à sa racine carrée, il aura nécessairement un diviseur plus petit que sa racine carrée.
    Pour chaque j, nous vérifions si i est divisible par j (i % j == 0).
    Si nous trouvons un tel j, cela signifie que i est divisible par un nombre autre que 1 et lui-même, donc i n'est pas premier. Nous définissons est_premier à false et interrompons la boucle avec break.
*/