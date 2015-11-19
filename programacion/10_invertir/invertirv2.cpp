#include <stdio.h>
#include <stdlib.h>

#define BASE 10
int main(){
    int numero;
    int numero_acumulado;
    int k, c;

    printf("Introduce un numero de 0 a 999: ");
    scanf(" %i", &numero);

 	numero_acumulado = numero%BASE;
   	numero/=BASE;	

   	numero_acumulado = numero_acumulado*BASE + numero%BASE;
	numero/=BASE;

    	numero_acumulado = numero_acumulado*BASE + numero%BASE;
	numero/=BASE;

    printf("\n");

    printf("El numero al reves en decimal es: %d\n", numero_acumulado);
    printf("El numero al reves en hexadecimal es: %X\n", numero_acumulado);
    printf("El numero al reves en octal es: %o\n", numero_acumulado);	        printf("El numero al reves en binario es: ");
	  for(c =15; c >= 0; c--) {
          k = numero_acumulado >> c;
	  if(k & 1)
            printf("1");
	  else
            printf("0");
          }
	       
	  printf("\n");

    return EXIT_SUCCESS;
}
