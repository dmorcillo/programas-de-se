#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y;

    printf("Introduce un numero:");
    scanf("%f",&x);
    printf("Introduce otro:");
    scanf("%f",&y);

    printf("La suma de %f y %f es:%f\n",x,y,x/y);

    return EXIT_SUCCESS;

}
