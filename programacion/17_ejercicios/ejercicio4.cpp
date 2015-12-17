#include <stdio.h>
#include <stdlib.h>

int main(){

    int lado = 4;

    printf("Dime el lado del triangulo: \n");
    scanf(" %i", &lado);

    for(int fila=0; fila<lado; fila++){
    	for(int col= -1; col<lado; col++)
	if(col<fila)
	    printf("* ");
	else
	    printf("  ");
	printf("\n");
    }

    return EXIT_SUCCESS;
}
