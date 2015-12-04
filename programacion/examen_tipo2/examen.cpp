#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero_pedido,
	resultado = 0;

    printf("Dime un numero: \n");
    scanf(" %i", &numero_pedido);

    if (numero_pedido/=2)
	printf("Es divisible");
    else
	if (numero_pedido/=3)
	    printf("Es divisible");
	else
	    if (numero_pedido/=5)
		printf("Es divisible");
	    else
		if (numero_pedido/=7)
		    printf("Es divisible");
		else
		    printf("No es divisible");

    return EXIT_SUCCESS;
}
