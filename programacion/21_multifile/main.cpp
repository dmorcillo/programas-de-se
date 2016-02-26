#include <stdio.h>
#include <stdlib.h>
#include "suma.h"

int main(){
    double op[2];

    printf("Este programa suma.\n\n");
    for(int i=0; i<2; i++){
        printf("Operando %i: ", i+1);
        scanf(" %lf", &op[i]);
    }

    printf("Resultado = %.2lf\n\n",
            suma(op[0], op[1])
                );
            return EXIT_SUCCESS;
            }
