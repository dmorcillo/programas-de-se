#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *documento;

    documento = fopen("archivo.txt", "w");

    fprintf(documento, "Hola que tal txema!\n");

    fclose(documento);


    return EXIT_SUCCESS;
}
