#include <stdio.h>
#include <stdlib.h>

int main(){

	int datos[9];
	float resultado = 0;
	int cima = 0;

	for(int i=cima; i<9; i++){
		printf("Dime un numero %i/9: ", i+1);
		scanf(" %i", &datos[cima++]);
		if(datos[i] == 0){
			datos[cima--];
			break;
		}
	}

	resultado = datos[cima];

	while(cima > 0){
	resultado = 1/resultado;
	cima--;
	resultado += datos[cima];
	}

	printf("%lf\n", resultado);

    return EXIT_SUCCESS;

}