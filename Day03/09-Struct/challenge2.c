#include <stdio.h>
#include <string.h>

struct Etudiant
{
    char nom[10];
    char prenom[10];
    int notes[10];
};

int main()
{
    struct Etudiant e;
    strcpy(e.nom, "ben");
    strcpy(e.prenom, "ayoub");

    for (int i = 0; i < 10; i++)
    {   
        printf("entrez la note %d :", i+1);
        scanf("%d", &e.notes[i]);
    }

    printf("%s\n", e.nom);
    printf("%s\n", e.prenom);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", e.notes[i]);
    }
    return 0;
}