#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *pf;

    pf = fopen("archivo.txt","w");

    fprintf(pf, "Esto es una prueba.");

    fclose(pf);


    return EXIT_SUCCESS;
}
