#include <stdio.h>
#include <stdlib.h>

int main(){

   printf("Dentro del archivo hay escrito:");


    char numeros[200];

    sprintf(numeros, "cat numeros");

    system(numeros);


    return EXIT_SUCCESS;
}
