#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numero,
        pensado;

    printf("He pensado un numero.\n"
           "Adivinalo:\n");

    srand(time(NULL));
    pensado = rand() % 10;

    do{
        printf("Numero:\n");
        scanf(" %i",&numero);
    }while(numero != pensado);

    printf("ASERTASTE WEY, LE DEJO MIS DIES.\n");

    return EXIT_SUCCESS;
}
