#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ROJO 0
#define AZUL 1
int main(){
    int componente[2];

    char respuesta;

    printf("¿El color que ves es rojo?: "); //Preguntar al usuario que ve.
    scanf(" %c", &respuesta);               //Escanear lo que ha escrito.
    componente[ROJO] = tolower(respuesta) == 's';
    printf("El color que ves es azul?: ");  //Preguntarle el segundo valor.
    scanf(" %c", &respuesta);		    //Escanear el segundo valor.
    componente[AZUL] = tolower(respuesta) == 's';

    if (componente[ROJO] & componente[AZUL])    		//Si el resultado ha sido 1, se ha escrito un 1 en los 2.
        printf("Ves morado\n");	  	//Por lo tanto, imprimir morado.
    else 			  	//Si uno de los 2 colores ha sido un 0, comprobar cual es.
    	if (componente[ROJO])       		//Si el que tiene el 1 es el color1.
	    printf("Ves rojo\n"); 	//Imprimir que ves rojo.
        else			  	//Si el color1 es un 0, pasar al color2.
    	    if (componente[AZUL])	 	 	//Si el color2 es un 1.
	    printf("Ves azul\n"); 	//Imprimir que ves azul.
	else printf("Ves negro\n"); 	//Si ninguno de los 2 anteriores ha sido 1, imprimir que ves negro.
    
    return EXIT_SUCCESS;
}
