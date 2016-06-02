#include "gartin_marrix.h"
#include <stdio.h>

void rellenar(int *matriz, int filas, int col){
    int entrada;

    printf("Rellena los valores de entrada");

    for(int f=0; f<filas; f++)
        for(int c=0; c<col; c++){
            printf("(%i, %i): ",f, c);
            scanf(" %i", &entrada);

     *(matriz + f*col + C) = entrada;
        }
}
void imprimir(int *matriz, int filas, int col);
