#include<stdio.h>
#include<stdlib.h>
int main()
{

 char nom[50];
    char prenom[50];
    int age;
    char sexe[50];
    char email[100];

printf("entre ton nom: ");
scanf("%s", &nom);
printf("\nentre ton prenom: ");
scanf("%s", &prenom);
printf("\nentre ton sexe: ");
scanf("%s", &sexe);
printf("\nentre ton email: ");
scanf("%s", &email);
printf("\nentre ton age: ");
scanf("%d", &age);

printf("nom: %s\n", nom);
printf("prenom: %s\n", prenom);
printf("sexe: %s\n", sexe);
printf("email: %s\n", email);
printf("age : %d", age);


return 0;

}


