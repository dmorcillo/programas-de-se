#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 0; 										//declarar las variables que vamos a utilizar
    FILE* pf;

	pf = fopen ("numeros.in", "w"); 							//Abrir el archivo en modo escritura (si no existe lo crea automaticamente)
	do{ 											//Ejecutar el bucle
	   printf("Escribe un numero entero, cuando hayas terminado escribe un 0: "); 		//Pedir al usuario que escriba un numero
	   scanf(" %i", &numero); 								//Escanear el numero introducido por el usuario y meterlo en la variable
	   fprintf(pf, "%i\n", numero);								//Imprime el numero escaneado en el archivo
	}while (numero != 0); 									//Hacer que pare el bucle cuando recibe un 0
	fclose(pf); 										//Cerrar el documento

    return EXIT_SUCCESS;
}
