#include <stdio.h>
#include <stdlib.h>

void leechuga(char *n){
	if (*n == '\0'){
		printf("\n");
		return;
	}

	printf("%c", *n);
	leechuga(n+1);
}


int main(){

	char lechuga[] = "Hola hijo de puta";

	leechuga(lechuga);

    return EXIT_SUCCESS;
}