#include <stdio.h>
#include <stdlib.h>

int calcula_berenjena(int n){
	if (n == 0)
		return 0;
	else
		return n + calcula_berenjena(n - 1);
}

int main(){

	int berenjena;

	printf("Que me digas una berenjena para sumar: \n");
	scanf(" %i", &berenjena);

	printf("La maldita suma de las berenjenas es: %i hijo de berenjena.\n", calcula_berenjena(berenjena));

    return EXIT_SUCCESS;
}
