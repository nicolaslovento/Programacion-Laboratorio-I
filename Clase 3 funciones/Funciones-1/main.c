#include <stdio.h>
#include <stdlib.h>

int mostrarIncrementar(int);

int main()
{   int numero;
    int incremento;
    printf("Ingrese numero \n");
    scanf("%d",&numero);
    incremento=mostrarIncrementar(numero);
    printf("\nEl numero incrementado es: %d \n",incremento);
    return 0;
}
//pasaje por valor.****
//pasaje por referencia(direccion de memoria)
//prototipo 1. no retorna ni recibe()funcion nula.
//prototipo 2.no retorna.si recibe
//prototipo 3 retorna y recibe (prototipo ideal)
//prototipo 4 retorna y no recibe.
int mostrarIncrementar(int numero)
{
    int retorno;

    printf("El numero  es: %d",numero);

    retorno=numero+10;
    return retorno;

}
