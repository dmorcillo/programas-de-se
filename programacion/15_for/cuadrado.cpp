#include <stdio.h>
#include <stdlib.h>

int main(){

    int base,
        altura;

    printf("Dime los base del cuadrado: ");
    scanf(" %i", &base);
    printf("Dime la altura del cuadrado: ");
    scanf(" %i", &altura);

    for(int h=0; h<altura; h++){
      for (int b=0; b<base; b++)
          printf("* ");
      printf("\n");
    }

    return EXIT_SUCCESS;
}
