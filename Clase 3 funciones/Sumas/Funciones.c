#include "Funciones.h"
#include <stdio.h>

int pedirEntero(char mensaje[],int min,int max)
{
    int numero;
    printf("Ingrese %s",mensaje);
    scanf("%d",&numero);

    while(numero<min || numero>max)
    {
        printf("Error: reingrese %s",mensaje);
        scanf("%d",&numero);
    }

    return numero;

}

int validarEntero(char texto[],int dato,int min,int max)
{
    while(dato<min || dato>max)
    {
        printf("Error: reingrese %s",texto);
        scanf("%d",&dato);
    }
    return dato;
}
