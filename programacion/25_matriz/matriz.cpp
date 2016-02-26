#include <stdio.h>
#include <stdlib.h>

int main(){
    double a[4][3], b[3][5], c[4][5];
    int i, j, k;

    printf("Introduce 12 valores");
    printf("\n");
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            scanf("%lf", &a[i][j]);
        }
    }


    printf("Introduce 15 valores.");
    printf("\n");
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            scanf("%lf", &b[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]=(c[i][j]+(a[i][k]*b[k][j]));
            }
        }
    }

    printf("Matriz A");
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("  %6lf \n ", a[i][j]);
        }
    }
    printf("Matriz B");
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("  %lf \n  ", b[i][j]);
        }
    }

    printf("Matriz C");
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("  %6lf \n ", c[i][j]);
        }
    }

return EXIT_SUCCESS;
}
