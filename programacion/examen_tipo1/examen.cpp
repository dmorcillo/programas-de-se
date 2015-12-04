#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero_pedido,
	resto = 0;

    printf("Dime un numero: \n");
    scanf(" %i", &numero_pedido);
//Esto es lo que pretendia decirte en clase, cuando te enseñe el bucle, que si lo quitaba,
//una vez me dijiste lo del resto ya sabia que esto era asi pero me hiciste un lio con lo
//del bucle que bueno, ahora en casa sin presion pues ha sido facil. Tambien he hecho el
//examen tipo 2 que me parecia mas facil.
    resto = numero_pedido%2;

    if (resto == 0)
	printf("El numero es par.\n");
    else
	printf("El numero es impar.\n");

    return EXIT_SUCCESS;
}
