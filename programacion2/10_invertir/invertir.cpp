#include <stdio.h>
#include <stdlib.h>

#define BASE 8
int main(){
    int numero,;

//Para cambiar los 10 por "BASE" es .,$s/10/BASE/g

    printf("Introduce un numero de 0 a 999: ");

    scanf(" %i,", &numero);

    printf("%i", numero%BASE);
        numero /=BASE;
    printf("%i", numero%BASE);
        numero /=BASE;
    printf("%i", numero%BASE);
        printf("\n");

    return EXIT_SUCCESS;
}
