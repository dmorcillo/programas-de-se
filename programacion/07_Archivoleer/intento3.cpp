#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *pf;

    int resultado = 0;
    int entrada;

    pf = fopen("numeros", "r");
    while(!feof(pf)){
    fscanf(pf, " %i", &entrada);
    resultado += entrada;
    }
    fclose(pf);

    printf("%i\n", resultado);


    return EXIT_SUCCESS;
}
