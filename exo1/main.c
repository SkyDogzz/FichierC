// Ouverture du fichier exo.txt en création 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **arg)
{
    FILE *file = NULL;

    file = fopen("exo.txt", "w");

    if (file != NULL)
    {
        fclose(file);
    }
    else
    {
        printf("Erreur d'ouverture\n");
        return 1;
    }
    return EXIT_SUCCESS;
}