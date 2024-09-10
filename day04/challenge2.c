#include <stdio.h>

int main()
{

    int tab[] = {5, 3, 8, 4, 2};
    int n = sizeof(tab) / sizeof(tab[0]);

    int i, j, cle;

    for (int i = 1; i < n; i++)
    {
        cle = tab[i];
        j = i - 1;

        while (tab[j] > cle && j >= 0)
        {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = cle;
    }

    for (int i = 0; i < n; i++)
    {
         printf("%d ", tab[i]);
    }

    return 0;
}