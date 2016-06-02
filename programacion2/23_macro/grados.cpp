#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159286
#define RADAGRA(x) ((x)*180/PI)
#define INC(x) ((x)++)

int main(){

    int rad = 4;
    int grad = RADAGRA(rad + 1);
    INC(rad);

    return EXIT_SUCCESS;
}
