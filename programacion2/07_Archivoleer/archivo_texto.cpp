#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *documento;
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;

    documento = fopen("numeros", "r");

    fscanf(documento, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n"
           &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", x1, x2, x3, x4,
            x5, x6, x7, x8, x9, x10);

    fclose(documento);


    return EXIT_SUCCESS;
}
