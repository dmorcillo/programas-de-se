#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, c , k;

    printf("Pon un decimal: ");
    scanf(" %d", &n);

    printf(" %d en binario es: ", n);

    for(c = 31; c >= 0; c--) {
        k = n >> c;

        if(k & 1)
            printf("1");
        else
            printf("0");
    }

    printf("\n");



    return EXIT_SUCCESS;
}
