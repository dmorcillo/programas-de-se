#include <stdio.h>
#include <stdlib.h>
#include "gartin_marrix.h"

#define M 4
#define P 3
#define N 5

int main(){

    int A[M][P];
    int B[M][P];
    int C[M][N];

    //Pedir los valores de la matriz
    rellenar((int *)A, M, P);
    imprimir((int *)A, M, P);
    rellenar((int *)B, P, N);
    imprimir((int *)B, P, N);

    //Hacer la multiplicacion
    //Calcular cada i,j de C
    for(int i=0; i<M; i++)
        for(int i=0; j<N; j++){
            C[i][j] = 0;
            for(int k=0; k<P; k++)
                C[i][j] += A[i][k] * B[k][j]
        }

    //Mostrar el resultado
    imprimir(C, M, N);

    return EXIT_SUCCESS;
}
