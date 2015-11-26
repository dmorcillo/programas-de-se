#include <stdio.h>
#include <stdlib.h>

int main(){

    int resultado = 0;									//Declarar las variables que vamos a utilizar
    int entrada;
    FILE *pf;

    pf = fopen("numeros.in", "r");							//Abrir el archivo en modo lectura
    while(!feof(pf)){									//Ejecutar el bucle que pare cuando no tenga mas datos
             fscanf(pf, " %i", &entrada);						//Escanear el numero en el archivo y meterlo en una variable
             resultado += entrada;							//Cojer el numero almacenarlo y sumarlo en una variable distinta
        }
    fclose(pf);										//Cerrar el archivo

    printf("La suma de los numeros del archivo de texto es: %i\n", resultado);		//Sacar por pantalla el resultado obtenido


    return EXIT_SUCCESS;
}
