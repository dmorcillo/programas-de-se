#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *suma;
    int x = 1, x1 = 2, x2 = 3, x3 = 4, x4 = 5, x5 = 6, x6 = 7, x7 = 8,
        x8 = 9, x9 = 10;

    suma = fopen("suma.txt", "w");

    fprintf(suma, "%i\n %i\n %i\n %i\n %i\n %i\n %i\n %i\n %i\n %i\n",
            x, x1, x2, x3, x4, x5, x6, x7, x8, x9);

    fprintf(suma, "La suma de los numeros es %i\n", x + x1 + x2 + x3 + x4 +             x5 + x6 + x7 + x8 + x9);


    fclose(suma);


    return EXIT_SUCCESS;
}
