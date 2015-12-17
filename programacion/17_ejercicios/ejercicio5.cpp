#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int lista = 0;

    const char *list[3] = {
    	"bread",
	"toast",
	"bacon"
    };

    for(int c=0; c<3; c++){
    	lista++;
    	printf("%s\n", list[lista-1]);
    }

    return EXIT_SUCCESS;
}
