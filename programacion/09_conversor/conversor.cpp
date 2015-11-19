#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero_decimal, c, k;

    printf("Introduce tu numero decimal: \n");
    scanf(" %d", &numero_decimal);

    printf("El numero %d es %X en hexadecimal.\n", numero_decimal, numero_decimal);
    printf("El numero %d es %o en octal.\n", numero_decimal, numero_decimal);
    printf("El numero %d en binario es: ", numero_decimal);

    for(c = 10; c >= 0; c--){

        k = numero_decimal >> c;

        if(k & 1)
            printf("1");
        else
            printf("0");
    }

    printf("\n");

    return EXIT_SUCCESS;
}
