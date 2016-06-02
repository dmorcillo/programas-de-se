#include <stdio.h>
#include <stdlib.h>

int main(){

    char mi_nombre[20];
    char comando[0x100];


    printf("Nombre: ");
    scanf(" %s", mi_nombre);

    sprintf(comando, "toilet --gay -f pagga 'Tu nombre es: %s'", mi_nombre);

    system(comando);


    return EXIT_SUCCESS;
}
