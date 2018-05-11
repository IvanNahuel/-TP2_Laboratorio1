#include <stdio.h>
#include <stdlib.h>
#include "Funcion.h"
#include "Funcion.c"
#define TAM 20

int main()
{
    char seguir='s';
    int opcion=0;
    int dniBaja;
    EPersona persona[TAM];
    inicializarPersonar(persona, TAM);

    while(seguir=='s')
    {
        printf("\n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("-----------------------------------------Alta Personas--------------------------------------------\n");
                altaPersonas(persona, TAM);
                break;
            case 2:
                printf("-----------------------------------------Baja Personas--------------------------------------------\n");
                printf("Ingrese el dni de la persona que quiere borrar :");
                scanf("%d",&dniBaja);
                BajarPersona(persona, TAM, dniBaja);
                break;
            case 3:
                 printf("--------------------------------------------Personas---------------------------------------------\n");
                 ImprimirPersonas(persona,TAM);
                break;
            case 4:
                GraficoEdades(persona,TAM);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}



















