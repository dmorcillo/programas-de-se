#include <stdio.h>
#include <stdlib.h>

int main(){

    int contador = 0,
	numero;
    double numerosuma = 0;

    do{
	printf("Dime un numero: \n");
	scanf(" %i", &numero);
	numerosuma += numero;
	contador++;
    }while(numero > -1);
   
    contador--;
    numerosuma -= numero;
    printf("La media de los %i numeros es: %lf\n", contador, numerosuma/contador);




    return EXIT_SUCCESS;
}
