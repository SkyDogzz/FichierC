#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *file = fopen("menfou", "w");

    if (file == NULL)
    {
        printf("Erreur d'ouverture\n");
        return 1;
    }
    fputs("t'a merdé frérot", file);

    fclose(file);

    return EXIT_SUCCESS;
}