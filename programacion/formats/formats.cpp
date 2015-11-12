#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    for (int vez=0; vez<80; vez++){
        printf("\r");
        for (int i=0; i<vez; i++)
            printf("=");
        printf("D");
        sleep(0.1);
        fflush(stdout);
    }

    return EXIT_SUCCESS;
}
