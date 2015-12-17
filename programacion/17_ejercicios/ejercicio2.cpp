#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros;
    double numerosuma = 0;

    for(int c=0; c<10; c++){
	printf("Dime un numero\n");
	scanf(" %i", &numeros);
	numerosuma += numeros;
    }

	printf("La media de los numeros es %lf", numerosuma / 10);


    return EXIT_SUCCESS;
}
