#include <stdio.h>
#include <stdlib.h>

void set(int *matriz, int fila, int c, int col, int dato){
    *(matriz + fila*col + c) = dato;
}

int get(int *matriz, int fila, int col, int c){
    int dato;

    dato = *(matriz + fila*col + c);

    printf("Los datos son: %i\n", dato);

    return dato;
}

int main(){

    int *a = NULL;
    int filas, col; //Preguntar al usuario.
    int buffer;

    printf("Cuantas columnas: \n");
    scanf(" %i", &col);
    printf("Cuantas filas: \n");
    scanf(" %i", &filas);

    //Reservar espacio para a

    a = (int *) malloc((filas*col)*sizeof(int));

    for(int f=0; f<filas; f++){
        for(int c=0; c<col; c++){
            printf("(%i, %i)\n", f+1, c+1);
            scanf( "%i", &buffer);
            set(a, f, col, c, buffer);
        }
    }

    //Imprimir la matriz con la funcion get
    for(int f=0; f<filas; f++){
        for(int c=0; c<col; c++){
            printf("(%i, %i)\n", f+1, c+1);
            get(a, f, col, c);
        }
    }
    //liberar espacio para a
    free(a);
    return EXIT_SUCCESS;
}
