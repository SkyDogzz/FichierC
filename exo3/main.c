/*
Construire 1 programme permettant d'écrire 100 nombre
entiers au hasard (entre 0 et 100) dans un fichier binaire
de 2 facon différentes
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    FILE *file1 = NULL;
    FILE *file2 = NULL;

    file1 = fopen("nb.dat", "wb");

    if (file1 != NULL)
    {
        for (int i = 0; i < 100; i++)
        {
            int randomNb = rand();
            fwrite(&randomNb, sizeof(int), 1, file1);
        }
        fclose(file1);
    }
    else
    {
        printf("Erreur d'ouverture fichier 1\n");
        return 1;
    }

    int randomNb[100];

    for (int i = 0; i < 100; i++)
    {
        randomNb[i] = rand();
    }

    file2 = fopen("nb2.dat", "wb");

    if (file2 != NULL)
    {
        fwrite(&randomNb, sizeof(int), 100, file2);
        fclose(file2);
    }
    else
    {
        printf("Erreur d'ouverture fichier 2\n");
        return 1;
    }

    return EXIT_SUCCESS;
}