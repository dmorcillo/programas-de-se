#include <stdio.h>
#include <stdlib.h>

#define BASE 10
int main(){

    unsigned int a = 3;

    printf("Dime un numero: ");
    scanf(" %x", &a);

    printf("%x\n", ~a);


    return EXIT_SUCCESS;
}
