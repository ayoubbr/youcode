#include <stdio.h>

int main()
{

    int tab[] = {5, 3, 8, 4, 2};
    int taille = sizeof(tab) / sizeof(tab[0]);
    int swapped = 0;
    int temp = 0;

    for (int i = 0; i < taille - 1; i++)
    {
        for (int j = 0; j < taille - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    return 0;
}