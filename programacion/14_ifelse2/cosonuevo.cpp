#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ROJO 1
#define AZUL 2
#define AMAR 4

int main(){
    int componente[2];

    char respuesta;

    printf("¿El color que ves es rojo? (s/N): ");
    scanf(" %c", &respuesta);
    componente[ROJO] = tolower(respuesta) == 's';
    printf("El color que ves es azul? (s/N): ");
    scanf(" %c", &respuesta);
    componente[AZUL] = tolower(respuesta) == 's';
    printf("El color que ves es amarillo? (s/N): ");
    scanf(" %c", &respuesta); 
    componente[AMAR] = tolower(respuesta) == 's';


    if (componente[ROJO] & componente[AZUL] & componente[AMAR])
	printf("Ves blanco\n");
    else
    	if (componente[ROJO] & componente[AZUL]) 
      	printf("Ves morado\n");
    	else	  	
    	    if (componente[ROJO] & componente[AMAR])
	    printf("Ves naranja\n");
            else
    	        if (componente[AZUL] & componente[AMAR])
	    	printf("Ves verde\n");
	        else
		    if (componente[ROJO])
    		    printf("Ves rojo\n");
		    else
			if (componente[AZUL])
    			printf("Ves azul\n");
			else
			    if (componente[AMAR])
    			    printf("Ves amarillo\n");
			    else
		            printf("Ves negro\n");
    
    return EXIT_SUCCESS;
}
