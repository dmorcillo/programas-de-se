#include <stdio.h>
#include <stdlib.h>

int main(){

    int color1;
    int color2;

    printf("¿El color que ves es rojo?: "); //Preguntar al usuario que ve.
    scanf(" %i", &color1);		    //Escanear lo que ha escrito.
    printf("El color que ves es azul?: ");  //Preguntarle el segundo valor.
    scanf(" %i", &color2);		    //Escanear el segundo valor.

    if (color1 & color2) 		//Si el resultado ha sido 1, se ha escrito un 1 en los 2.
        printf("Ves morado\n");	  	//Por lo tanto, imprimir morado.
    else 			  	//Si uno de los 2 colores ha sido un 0, comprobar cual es.
    	if (color1)       		//Si el que tiene el 1 es el color1.
	    printf("Ves rojo\n"); 	//Imprimir que ves rojo.
        else			  	//Si el color1 es un 0, pasar al color2.
    	    if (color2)	 	 	//Si el color2 es un 1.
	    printf("Ves azul\n"); 	//Imprimir que ves azul.
	else printf("Ves negro\n"); 	//Si ninguno de los 2 anteriores ha sido 1, imprimir que ves negro.
    
  return EXIT_SUCCESS;
}
