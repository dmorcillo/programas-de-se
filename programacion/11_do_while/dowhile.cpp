#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 0;
    char nombre [25];

    printf("Introduce tu nombre: ");
    scanf(" %s", nombre);

    do{
    numero += 1;
    printf("Tu nombre es: %s", nombre);
    }while (numero != 77 );

    return EXIT_SUCCESS;
}
