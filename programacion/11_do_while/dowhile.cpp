#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 0;
    char nombre [25];

    printf("Introduce tu nombre: ");
    scanf(" %s", nombre);

    do{
       printf("Tu nombre es: %s\n", nombre);
       numero ++;
    }while (numero != 77 );

    return EXIT_SUCCESS;
}
