#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"
#define TAM 5



int main()
{
    int vector[TAM];
    char vecChar[TAM]="holas";
    int i;
    int maximo;
    int posicion;
    int numero=3;
    int pares;

    cargarVector("Ingrese numero : ",vector,TAM);
    pares=cantidadNumPares(vector,TAM);
    printf("Hay %d numeros pares en el vector\n",pares);
    buscarChar(vecChar,TAM,'a');


    //mostrarVector(vector,TAM);
    //maximo=encontrarMaximo(vector,TAM);
    //printf("El maximo es %d\n",maximo);
    //posicion=devolverPosicion(vector,TAM,numero);
    //printf("El numero %d se encuentra en la posicion %d",numero,posicion);

 return 0;
}



