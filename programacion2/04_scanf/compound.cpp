#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[0x20];

    printf("Tell me your name: ");
    gets(name);
    printf("Te llamas %s.\n", name);


    return EXIT_SUCCESS;
}
