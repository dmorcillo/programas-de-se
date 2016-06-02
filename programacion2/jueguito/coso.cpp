#include<stdio.h>

void iniciar(char tablero[3][3]);

void jugada(char tablero[3][3], int jugador, int fila, int columna);

void mostrar (char tablero[3][3]);

int main(){

    char tablero[3][3];

    int operando,jugador,fila,columna;

    iniciar(tablero);

    do{

        printf("1.Reiniciar tablero\n2.Introducir jugada\n3.Salir\n");

        scanf("%i", &operando);

        switch(operando){

            case 1:

                iniciar(tablero);

                break;

            case 2:

                printf("¿Jugador?(1 o 2)\n");

                scanf("%i", &jugador);



                printf("\nIntroduce la fila(1 al 3)\n");

                scanf("%i", &fila );

                fila=fila-1;



                printf("\nIntroduce la columna(1 al 3)\n");

                scanf("%i", &columna );

                columna=columna-1;



                jugada(tablero, jugador, fila,  columna);
                mostrar(tablero);                                                                                                                         break;

            case 3:

                printf("adios\n");

                break;

            default:

                printf("Opcion incorrecta.\n");
        }

    }while(operando!=3);

}



void iniciar(char tablero[3][3]){

    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            tablero[i][j]='-';
        }

    }

}



void jugada(char tablero[3][3], int jugador, int fila, int columna){

    if(jugador==1) tablero[fila][columna]='x';

    else tablero[fila][columna]='o';

}



void mostrar(char tablero[3][3]){

    int i,j;

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            printf("  %c",tablero[i][j]);

        }

        printf("\n");

    }

    printf("\n");

}

