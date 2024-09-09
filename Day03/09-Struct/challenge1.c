#include<stdio.h>
#include<string.h>

struct Person
{
    char nom[10];
    char prenom[10];
    int age;
};


int main(){
    struct Person person;
    strcpy(person.nom, "ben");
    strcpy(person.prenom, "ayoub");
    person.age = 20;

    printf("%s\n", person.nom);
    printf("%s\n", person.prenom);
    printf("%d", person.age);
    return 0;
}