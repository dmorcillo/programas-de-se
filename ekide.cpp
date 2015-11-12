#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    int resultado;

    printf("Escribe un numero:\n");
    scanf("%i",&x);
    printf("Escribe otro numero:\n");
    scanf("%i",&y);

    printf("La suma de %i mas %i es igual a %i:",x,y,x+y);

    resultado=x+y;

    if(resultado%2==0) printf("%i es un numero par.\n",resultado);
    else printf("%i es un numeor impar.\n",resultado);

    return EXIT_SUCCESS;

}
