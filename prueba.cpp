#include <stdio.h>
#include <stdlib.h>
    int main(){
    int x,y;
    int resultado;
    
    printf("Escribe un numero entero:\n");
    scanf("%i",&x);
    printf("Escribe otro numero entero\n");
    scanf("%i",&y);

    printf("El resultado de %i mas %i es igual a:%i\n",x,y,x+y);

    resultado=x+y;

    if(resultado%2==0) printf ("El resultado es par.\n");
    else printf("El resultado es impar.\n");
   
    return EXIT_SUCCESS;
}
