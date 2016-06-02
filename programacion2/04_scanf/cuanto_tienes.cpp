#include <stdio.h>
#include <stdlib.h>

int main(){

    int saldo;
    int mes, ano;

    const char *MES[12] = {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre",
    };

    printf("¿Cuanto dinero tienes?\n");
    printf("yo=<cantidad\n");

    scanf(" yo=%i", &saldo);
    printf("Saldo: %i\n", saldo);

    printf("Fecha de nacimiento (dd/mm/aa):\n ");
    scanf(" %*i/%i/%i", &mes, &ano);

    printf("Naciste en el mes %s de %i.\n", MES[mes-1], ano);


    return EXIT_SUCCESS;
}
