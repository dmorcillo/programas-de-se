#include <stdio.h>
#include <stdlib.h>

int calculador_patata(int n){
	if(n == 0){
		return 1;
	}else
		return n * calculador_patata(n - 1);
}

int main(){

	int patata;

	printf("Dime una patata: ");
	scanf(" %i", &patata);

	printf("La patata es: %i\n", calculador_patata(patata));
    
    return EXIT_SUCCESS;
}
