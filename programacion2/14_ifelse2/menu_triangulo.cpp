#include <stdio.h>
#include <stdlib.h>

int main(){
    double lados = 0;
    int respuesta = 0;

    printf("¿Cuanto miden los lados del triangulo?: ");
    scanf(" %lf", &lados);

    printf("Elige que quieres sabe del triangulo:\n" 
	    "1 para perimetro.\n" 
	    "2 para area.\n"
	    "3 para altura.\n");
    scanf(" %i", &respuesta);

    switch(respuesta){
       case 1:
       printf("El perimetro del triangulo con lado %lf es: %lf\n", lados, 3*lados);
       break;
       case 2:
       printf("El area de un triangulo con lado %lf es:\n", lados);
       break;
       case 3:
       printf("La altura de un triangulo con lado %lf es:\n", lados);
       break;
    }


    return EXIT_SUCCESS;
}
