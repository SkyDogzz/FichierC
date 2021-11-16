
## Code ouverture fichier c

||Création avec suppresion|Création sans suppression | Ecriture | Lecture | Modification
|--|--|--|--|--|--|
|w|<p align="center">x</p>||<p align="center">x</p>|||
|r||||<p align="center">x</p>||
|a||<p align="center">x</p>|<p align="center">x</p>|||
|w+|<p align="center">x</p>||<p align="center">x</p>|<p align="center">x</p>|<p align="center">x</p>|
|r+|||<p align="center">x</p>|<p align="center">x</p>|<p align="center">x</p>|
|a+||<p align="center">x</p>|<p align="center">x</p>|<p align="center">x</p>||
|a+||<p align="center">x</p>|<p align="center">x</p>|<p align="center">x</p>||

## Fonctions d'écritures
fwrite = n'importe quoi
|  |  |
|--|--|
| fprintf  |1 chaîne formattée |
| fputs  | 1 chaîne non formattée |
| fputc  | 1 octet ( 1 caractère ) |


int value = fwrite( addresse de la variable à écrire, taille en octet, 1 si la variable est simple ou le nombre de cases d'un tableau à écrire, pointeur de fichier )

si value = param 3 la fonction s'est terminée correctement

ex:
```
FILE *file = NULL;
double value = 2.55;
file = fopen("nb.dat","wb"");
fwrite(&value, sizeof(double), 1, file);
fclose(file);
