#include "header.h"

void ajouter(Etudiant e[], int *nombre_etudiants, int id)
{
    int choice = 2;
    do
    {
        if (*nombre_etudiants >= MAX_STUDENTS)
        {
            printf("La limite des etudiants est ateint.\n");
            return;
        }

        printf("Ajout d'un nouveau etudiant:\n");

        e[*nombre_etudiants].numero = id;
        printf("Numero: %d\n", e[*nombre_etudiants].numero);

        printf("Nom: ");
        scanf(" %s", e[*nombre_etudiants].nom);

        printf("Prenom: ");
        scanf(" %s", e[*nombre_etudiants].prenom);

        printf("Date de naissance: ");
        scanf(" %s", e[*nombre_etudiants].date_naissance);

        printf("Departement: ");
        scanf(" %s", e[*nombre_etudiants].departement);

        printf("Note generale: ");
        scanf(" %f", &e[*nombre_etudiants].note);

        (*nombre_etudiants)++;
        id++;
        printf("------------------------------\n");
        printf("Etudiant ajoute avec succes!\n");
        printf("------------------------------\n");
        printf("Est-ce vous voulez inserer un autre etudiant? \n");
        printf("  # Clickez sur 1\n");
        printf("  # Pour retourner au menu principal clickez 0\n");
        scanf("   %d", &choice);

    } while (choice != 0);
}

void supprimer_ou_modifier(Etudiant e[], int *nombre_etudiants)
{
    int choix;
    printf("--------------------------\n");
    printf("Voulez-vous :\n");
    printf("--------------------------\n");
    printf("1. Supprimer un etudiant.\n");
    printf("2. Modifier un etudiant.\n");
    printf("Entrez votre choix (1 ou 2):  ");
    scanf("%d", &choix);

    if (choix == 1)
    {
        if (nombre_etudiants == 0)
        {
            printf("Aucun Etudiant disponible pour la suppression.\n");
        }
        else
        {
            int numero_cherche = 0;
            printf("Entrez le numero d'etudiant a supprimer: ");
            scanf(" %d", &numero_cherche);
            for (int i = 0; i < *nombre_etudiants; i++)
            {
                if (numero_cherche == e[i].numero)
                {
                    printf("Etudiant trouve : %s %s\n", e[i].prenom, e[i].nom);
                    for (int j = i; j < *nombre_etudiants - 1; j++)
                    {
                        e[j] = e[j + 1];
                    }
                    (*nombre_etudiants)--;
                    printf("Etudiant supprime avec succes !\n");
                    break;
                }
            }
        }
    }
    else if (choix == 2)
    {
        int numero_cherche = 0;
        printf("Entrez le numero d'etudiant a modifier: ");
        scanf(" %d", &numero_cherche);
        for (int i = 0; i < *nombre_etudiants; i++)
        {

            if (numero_cherche == e[i].numero)
            {
                printf("Etudiant trouve !\n");

                printf("Entrez le nouveau nom d'etudiant: ");
                scanf(" %s", e[i].nom);

                printf("Entrez le nouveau prenom d'etudiant: ");
                scanf(" %s", e[i].prenom);

                printf("Entrez la nouvelle Date de naissance: ");
                scanf(" %s", e[i].date_naissance);

                printf("Entrez la nouvelle Departement: ");
                scanf(" %s", e[i].departement);

                printf("Entrez la nouvelle Note : ");
                scanf(" %f", &e[i].note);

                printf("------------------------------\n");
                printf("Etudiant modifie avec succes!\n");
                printf("------------------------------\n");
                break;
            }
        }
    }
    else
    {
        printf("Choix invalide. Veuillez entrer 1 ou 2.\n");
    }
}

void afficher(Etudiant e[], int *nombre_etudiants)
{

    if (*nombre_etudiants == 0)
    {
        printf("Aucun Etudiant disponible.\n");
    }
    else
    {
        printf("\n--- Liste des Etudiants disponibles ---\n");
        for (int i = 0; i < *nombre_etudiants; i++)
        {
            printf("Etudiant %d:\n", i + 1);
            printf("Numero: %d\n", e[i].numero);
            printf("Nom: %s\n", e[i].nom);
            printf("Prenom: %s\n", e[i].prenom);
            printf("Date de naissance: %s\n", e[i].date_naissance);
            printf("Departement: %s\n", e[i].departement);
            printf("Note generale: %.2f\n", e[i].note);
            printf("-----------------------\n");
        }
    }
}

void calculer_moyenne(Etudiant e[], int *nombre_etudiants)
{
    if (*nombre_etudiants == 0)
    {
        printf("Aucun Etudiant disponible.\n");
    }
    else
    {
        char list_of_departements[100][50];
        float somme_par_departement[100] = {0};
        int nombre_etudiants_par_departement[100] = {0};
        int dep_conteur = 0;
        float somme_total = 0;

        for (int i = 0; i < *nombre_etudiants; i++)
        {
            somme_total += e[i].note;

            // Vérifier si le département existe dans la liste
            int j;
            for (j = 0; j < dep_conteur; j++)
            {
                if (strcasecmp(e[i].departement, list_of_departements[j]) == 0)
                {
                    somme_par_departement[j] += e[i].note; 
                    nombre_etudiants_par_departement[j]++;
                    break;
                }
            }

            // Si le département n'existe pas, et ajouter
            if (j == dep_conteur)
            {
                strcpy(list_of_departements[dep_conteur], e[i].departement);
                somme_par_departement[dep_conteur] = e[i].note;
                nombre_etudiants_par_departement[dep_conteur] = 1;
                dep_conteur++;
            }
        }
        printf("---------------------------------------------\n");
        for (int i = 0; i < dep_conteur; i++)
        {
            float moyenne_departement = somme_par_departement[i] / nombre_etudiants_par_departement[i];
            printf("Moyenne generale pour le departement %s: %.2f\n", list_of_departements[i], moyenne_departement);
        }

        // Afficher la moyenne générale de l'université
        printf("---------------------------------------------\n");
        printf("Moyenne generale de l'universite: %.2f\n", somme_total / *nombre_etudiants);
        printf("---------------------------------------------\n");
    }
}

void statistiques(Etudiant e[], int *nombre_etudiants)
{
    if (*nombre_etudiants == 0)
    {
        printf("Aucun Etudiant disponible.\n");
    }
    else

    {
        printf("--------------------------\n");
        printf("Voulez-vous :\n");
        printf("--------------------------\n");
        printf("1. Afficher le nombre total d'etudiants inscrits.\n");
        printf("2. Afficher le nombre d'etudiants dans chaque departement.\n");
        printf("3. Afficher les etudiants ayant une moyenne generale superieure a un certain seuil.\n");
        printf("4. Afficher les 3 etudiants ayant les meilleures notes.\n");
        printf("5. Afficher le nombre d'etudiants ayant reussi dans chaque departement\n");
        printf("--------------------------\n");

        int choix;
        printf("Entrez votre choix (1 , 2 , 3 , 4 OU 5):  ");
        scanf("%d", &choix);

        // Afficher le nombre total d'étudiants inscrits.
        if (choix == 1)
        {
            printf("Le nombre total d'Etudiants inscrits est : %d\n", *nombre_etudiants);
            printf("---------------------------------------------\n");
        }
        // Afficher le nombre d'étudiants dans chaque département.
        else if (choix == 2)
        {
            char list_of_departements[100][50];
            int nombre_etudiant_dans_dep[100] = {0};
            int dep_conteur = 0;

            for (int i = 0; i < *nombre_etudiants; i++)
            {
                int j;

                for (j = 0; j < dep_conteur; j++)
                {
                    if (strcmp(e[i].departement, list_of_departements[j]) == 0)
                    {
                        nombre_etudiant_dans_dep[j]++;
                        break;
                    }
                }

                if (j == dep_conteur)
                {
                    strcpy(list_of_departements[dep_conteur], e[i].departement);
                    nombre_etudiant_dans_dep[dep_conteur++] = 1;
                }
            }

            for (int i = 0; i < dep_conteur; i++)
            {
                printf("Departement: %s - Nombre d'etudiants : %d\n", list_of_departements[i], nombre_etudiant_dans_dep[i]);
            }
            printf("---------------------------------------------\n");
        }
        // Afficher les étudiants ayant une moyenne générale supérieure à un certain seuil.
        else if (choix == 3)
        {
            printf("Les etudiants ayant une moyene generale superieur a 8 sont: \n");
            for (int i = 0; i < *nombre_etudiants; i++)
            {
                if (e[i].note >= 8)
                {
                    printf("Etudiant %d:\n", i + 1);
                    printf("Numero: %d\n", e[i].numero);
                    printf("Nom: %s\n", e[i].nom);
                    printf("Prenom: %s\n", e[i].prenom);
                    printf("Date de naissance: %s\n", e[i].date_naissance);
                    printf("Departement: %s\n", e[i].departement);
                    printf("Note generale: %.2f\n", e[i].note);
                    printf("--------------------------\n");
                }
            }
            printf("---------------------------------------------\n");
        }
        // Afficher les 3 étudiants ayant les meilleures notes.
        else if (choix == 4)
        {
            Etudiant top3[3] = {{.note = 0}, {.note = 0}, {.note = 0}};
            for (int i = 0; i < *nombre_etudiants; i++)
            {
                if (e[i].note > top3[2].note)
                {
                    top3[2] = e[i];

                    if (top3[2].note > top3[1].note)
                    {
                        Etudiant temp = top3[1];
                        top3[1] = top3[2];
                        top3[2] = temp;
                    }
                    if (top3[1].note > top3[0].note)
                    {
                        Etudiant temp = top3[0];
                        top3[0] = top3[1];
                        top3[1] = temp;
                    }
                }
            }
            printf("Les 3 meilleurs etudiants sont :\n");
            for (int i = 0; i < 3 && top3[i].note > 0; i++)
            {
                printf("%d. %s %s - Departement: %s - Note: %.2f\n", i + 1, top3[i].nom, top3[i].prenom, top3[i].departement, top3[i].note);
            }
            printf("---------------------------------------------\n");
        }
        else if (choix == 5)
        {
            char list_de_departements[100][50];
            int nombre_etudiant_reussi_dans_dep[100] = {0};
            int dep_conteur = 0;
            for (int i = 0; i < *nombre_etudiants; i++)
            {
                if (e[i].note >= 10)
                {
                    int j;
                    for (j = 0; j < dep_conteur; j++)
                    {
                        if (strcmp(e[i].departement, list_de_departements[j]) == 0)
                        {
                            nombre_etudiant_reussi_dans_dep[j]++;
                            break;
                        }
                    }
                    if (j == dep_conteur) // Nouveau département trouvé
                    {
                        strcpy(list_de_departements[dep_conteur], e[i].departement);
                        nombre_etudiant_reussi_dans_dep[dep_conteur++] = 1;
                    }
                }
            }

            for (int i = 0; i < dep_conteur; i++)
            {
                printf("Departement: %s - Nombre d'etudiants ayant reussi : %d\n", list_de_departements[i], nombre_etudiant_reussi_dans_dep[i]);
            }
            printf("---------------------------------------------\n");
        }
        else
        {
            printf("Choix invalide. Veuillez entrer 1 , 2 , 3 , 4 OU 5.\n");
        }

        printf("---------------------------------------------\n");
    }
}

void rechercher(Etudiant e[], int *nombre_etudiants)
{
    if (*nombre_etudiants == 0)
    {
        printf("Aucun Etudiant disponible.\n");
    }
    else
    {
        int choix;
        printf("--------------------------\n");
        printf("Voulez-vous chercher par:\n");
        printf("--------------------------\n");
        printf("1. Nom de l'etudiant\n");
        printf("2. Departement specifique\n");
        printf("--------------------------\n");
        printf("Entrez votre choix (1 ou 2):  ");
        scanf("%d", &choix);

        if (choix == 1)
        {
            char nom_cherche[50];
            printf("Entrez le nom d'etudiant que tu veux chercher: ");
            scanf("%s", &nom_cherche);
            printf("--------------------------\n");

            int found = 0;
            for (int i = 0; i < *nombre_etudiants; i++)
            {
                if (strcasecmp(e[i].nom, nom_cherche) == 0)
                {
                    printf("Etudiant %d:\n", i + 1);
                    printf("Numero: %d\n", e[i].numero);
                    printf("Nom: %s\n", e[i].nom);
                    printf("Prenom: %s\n", e[i].prenom);
                    printf("Date de naissance: %s\n", e[i].date_naissance);
                    printf("Departement: %s\n", e[i].departement);
                    printf("Note generale: %.2f\n", e[i].note);
                    printf("-----------------------\n");
                    found = 1;
                }
            }
            if (!found)
            {
                printf("Aucun étudiant trouvé avec le nom: %s\n", nom_cherche);
            }
        }
        else if (choix == 2)
        {
            char dept_cherche[50];
            printf("Entrez le nom du departement que vous voulez chercher: ");
            scanf("%s", dept_cherche);
            printf("--------------------------\n");

            int found = 0; // Flag to check if students in department are found
            for (int i = 0; i < *nombre_etudiants; i++)
            {
                if (strcasecmp(e[i].departement, dept_cherche) == 0)
                {
                    printf("Departement: %s\n", e[i].departement);
                    printf("Etudiant %d:\n", i + 1);
                    printf("Numero: %d\n", e[i].numero);
                    printf("Nom: %s\n", e[i].nom);
                    printf("Prenom: %s\n", e[i].prenom);
                    printf("Date de naissance: %s\n", e[i].date_naissance);
                    printf("Note generale: %.2f\n", e[i].note);
                    printf("-----------------------\n");
                    found = 1;
                }
            }
            if (!found)
            {
                printf("Aucun étudiant trouvé dans le département: %s\n", dept_cherche);
            }
        }
        else
        {
            printf("Choix invalide. Veuillez entrer 1 ou 2.\n");
        }
    }
}

void trier(Etudiant e[], int *nombre_etudiants)
{
    if (*nombre_etudiants == 0)
    {
        printf("Aucun Etudiant disponible.\n");
    }
    else
    {
        int choix;
        printf("--------------------------\n");
        printf("Voulez-vous TRIER par:\n");
        printf("--------------------------\n");
        printf("1. Nom de l'etudiant (de A a Z ou de Z a A).\n");
        printf("2. Moyenne generale (du plus eleve au plus faible ou inversement.)\n");
        printf("3. Statut de reussite (ceux ayant une moyenne superieure ou egale a 10/20).\n");
        printf("--------------------------\n");
        printf("Entrez votre choix (1 , 2 ou 3):  ");
        scanf("%d", &choix);

        if (choix == 1)
        {
            int choix_sense;
            printf("1. de A a Z .\n");
            printf("2. de Z a A.\n");
            printf("Entrez votre choix (1 ou 2):  .\n");
            scanf("%d", &choix_sense);

            if (choix_sense == 1)
            {
                Etudiant temp;
                for (int i = 0; i < *nombre_etudiants; i++)
                {
                    for (int j = 0; j < *nombre_etudiants - i - 1; j++)
                    {
                        if (strcmp(e[j].nom, e[j + 1].nom) > 0)
                        {
                            temp = e[j];
                            e[j] = e[j + 1];
                            e[j + 1] = temp;
                        }
                    }
                }

                printf("Etudiants tries de A a Z:\n");
                for (int i = 0; i < *nombre_etudiants; i++)
                {
                    printf("Etudiant %d: Nom et prenom : %s %s\n", i + 1, e[i].nom, e[i].prenom);
                }
            }
            else if (choix_sense == 2)
            {
                // Sort students by name from Z to A
                Etudiant temp;
                for (int i = 0; i < *nombre_etudiants - 1; i++)
                {
                    for (int j = 0; j < *nombre_etudiants - i - 1; j++)
                    {
                        // Use strcmp for string comparison
                        if (strcmp(e[j].nom, e[j + 1].nom) < 0)
                        {
                            // Swap students
                            temp = e[j];
                            e[j] = e[j + 1];
                            e[j + 1] = temp;
                        }
                    }
                }

                printf("Etudiants tries de Z a A:\n");
                for (int i = 0; i < *nombre_etudiants; i++)
                {
                    printf("Etudiant %d: %s %s\n", i + 1, e[i].nom, e[i].prenom);
                }
            }
            else
            {
                printf("Choix invalide. Veuillez entrer 1 ou 2.\n");
            }
        }
        else if (choix == 2)
        {
            int choix_sense;
            printf("1. Du plus eleve au plus faible .\n");
            printf("2. Du plus faible au plus eleve.\n");
            printf("Entrez votre choix (1 ou 2):  .\n");
            scanf("%d", &choix_sense);

            if (choix_sense == 1)
            {
                Etudiant temp;
                for (int i = 0; i < *nombre_etudiants; i++)
                {
                    for (int j = 0; j < *nombre_etudiants - i - 1; j++)
                    {
                        if (e[j].note < e[j + 1].note)
                        {
                            temp = e[j];
                            e[j] = e[j + 1];
                            e[j + 1] = temp;
                        }
                    }
                }

                printf("Etudiants tries par moyenne generale, du plus eleve au plus faible:\n");
                for (int i = 0; i < *nombre_etudiants; i++)
                {
                    printf("Etudiant %d: Nom et prenom : %s %s - Moyenne generale : %f\n", i + 1, e[i].nom, e[i].prenom, e[i].note);
                }
            }
            else if (choix_sense == 2)
            {
                Etudiant temp;

                for (int i = 0; i < *nombre_etudiants; i++)
                {
                    for (int j = 0; j < *nombre_etudiants - i - 1; j++)
                    {
                        if (e[j].note > e[j + 1].note)
                        {
                            temp = e[j];
                            e[j] = e[j + 1];
                            e[j + 1] = temp;
                        }
                    }
                }

                printf("Etudiants tries par moyenne generale, du plus faible au plus eleve:\n");
                for (int i = 0; i < *nombre_etudiants; i++)
                {
                    printf("Etudiant %d: Nom et prenom : %s %s - Moyenne generale : %f\n", i + 1, e[i].nom, e[i].prenom, e[i].note);
                }
            }
            else
            {
                printf("Choix invalide. Veuillez entrer 1 ou 2.\n");
            }
        }
        else if (choix == 3)
        {
            printf("Etudiants ayant une moyenne superieure ou egale a 10/20:\n");
            int found = 0;
            Etudiant temp;
            for (int i = 0; i < *nombre_etudiants; i++)
            {
                for (int j = 0; j < *nombre_etudiants - i - 1; j++)
                {
                    if (e[j].note < e[j + 1].note)
                    {
                        temp = e[j];
                        e[j] = e[j + 1];
                        e[j + 1] = temp;
                    }
                }
            }

            for (int i = 0; i < *nombre_etudiants; i++)
            {
                if (e[i].note >= 10)
                {
                    printf("Etudiant %d: Nom et prenom : %s %s - Moyenne generale : %.2f\n", i + 1, e[i].nom, e[i].prenom, e[i].note);
                    found = 1;
                }
            }
            if (!found)
            {
                printf("Aucun etudiant n'a une moyenne superieure ou egale a 10/20.\n");
            }
        }
        else
        {
            printf("Choix invalide. Veuillez entrer 1 , 2 ou 3.\n");
        }
    }
}