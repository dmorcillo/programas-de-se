#include <stdio.h>
#include <stdlib.h>

#define BASE 10
int main(){

    int numero = 0;									//Declaramos las variables que vayamos a utilizar
    int numero_sumado = 0;

    printf("Escribe un numero entero: ");						//Pedimos un numero al usuraio
    scanf(" %i", &numero);								//Escaneamos el numero del usuario y lo metemos en la variable

    do{											//Abrimos un bucle
      numero_sumado *= BASE;								//Multiplicamos por la BASE para poder añadirle otro numero
      numero_sumado += numero % BASE;							//Añadimos el resto del numero acumulado a la variable
      numero /= BASE;  									//Dividimos el acumulado entre la BASE para desplazar los numeros a la izquierda
    }while (numero != 0);								//Cuando el bucle no reciba mas numeros para

    printf("El numero dado la vuelta en decimal es: %i\n", numero_sumado);		//Imprimimos el resultado en decimal
    printf("El numero dado la vuelta en hexadecimal es: %X\n", numero_sumado);		//Imprimimos el resultado en hexadecimal
    printf("El numero dado la vuelta en octal es: %o\n", numero_sumado);		//Imprimimos el resultado en octal

    return EXIT_SUCCESS;
}
