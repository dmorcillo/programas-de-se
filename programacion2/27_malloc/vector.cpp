#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p = NULL;

	p = (int *) malloc(2*sizeof(int));
	*p = 5; //p[0] = 5;
	*(p + 1) = 7; //p[1] = 7;

	for (int i=0; i<2; i++)
		printf("%i ", p[i]); // *(p+a)

	printf("\n");

    return EXIT_SUCCESS;
}
