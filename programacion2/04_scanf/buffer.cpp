#include <stdio.h>
#include <stdlib.h>

int main(){

    char buffer[5];

    printf("Say something: ");
    fgets(buffer, 4, stdin);


    return EXIT_SUCCESS;
}
