#include <stdio.h>
#include <stdlib.h>

void sumar(int op1, int op2, int op3, int *suma){
	 *suma = op1 + op2 + op3;
}

void imprimir(int resultado){
	printf("La suma de los operandos es: %i\n", resultado);
}

int sumartodo(int x, int y, int z, int suma){
	suma = x + y + z + 10;
	return suma;
}


int main(){

	int x = 5;
	int y = 6;
	int z = 3;
	int suma = 0;

	sumar(x,y,z, &suma);
	imprimir(suma);

	sumartodo(x,y,z,suma);

	suma = sumartodo(x,y,z,suma);
	printf("La suma es %i\n", suma);

    return EXIT_SUCCESS;
}
