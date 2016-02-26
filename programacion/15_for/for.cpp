#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

  for(int h=0; h<24; h++)
    for(int d=0; d<60; d++)
        for(int u=0; u<60; u++){
            sleep(1);
            printf("%i : %i : %i\n", h, d, u);
        }

    printf("\n");

    return EXIT_SUCCESS;
}
