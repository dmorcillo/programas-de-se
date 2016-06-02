#include <stdio.h>
#include <stdlib.h>

int main(){

	int multiplicando, multiplicador, mando, mador, total = 0;

	printf("Dime el multiplicando: \n");
	scanf(" %i", &multiplicando);
	printf("Dime el multiplicador: \n");
	scanf(" %i", &multiplicador);

	mando = multiplicando;
	mador = multiplicador;

	while(multiplicador >= 1){
		if(multiplicador%2 == 1)
				total += multiplicando;
			multiplicando *= 2;
			multiplicador /= 2;
	}

	printf("%i por %i es igual a: %i\n", mando, mador, total );

    return EXIT_SUCCESS;
}
