#include <stdio.h>
#include <stdlib.h>

void ordenacion(int *n){
	int aux;

}


int main(){

	int pinea[10] = {3, 5, 6, 1, 2, 9, 8, 4, 7, 0};
	int aux = 0;

	for (int c = 0 ; c < ( 10 - 1 ); c++)
	  {
	    for (int d = 0 ; d < 10 - c - 1; d++)
	    {
	      if (pinea[d] > pinea[d+1])
	      {
	      	if(pinea){
	      		break;
	      	} else {
	        aux       = pinea[d];
	        pinea[d]   = pinea[d+1];
	        pinea[d+1] = aux;
	    	}
	      }
	    }
	  }

	for(int i=0; i<10; i++){
		printf("%i", pinea[i]);
	}

	printf("%i", pinea[0]);

    return EXIT_SUCCESS;
}
