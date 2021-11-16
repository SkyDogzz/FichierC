// Ouverture en lecture, modif, écriture
// Le crée si il n'existe pas, le garder si il existe

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *file = NULL;

    file = fopen("measure.dat", "r+b");
    if(file == NULL){
        file = fopen("measure.dat", "w+b");
    }

    return EXIT_SUCCESS;
}