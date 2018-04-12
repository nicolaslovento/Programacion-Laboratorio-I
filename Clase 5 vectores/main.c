#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"
#define TAM 5



int main()
{
    int vector[TAM];
    int i;
    int maximo;
    int posicion;
    int numero=3;

    /*for(i=0;i<5;i++)
    {
        vector[i]=5;

    }*/

    /*cargar secuencial. Carga de manera completa*/



    cargarVector("Ingrese numero : ",vector,TAM);
    mostrarVector(vector,TAM);//pasamos direccion de memoria del vector, porque se pasa por referencia.
    maximo=encontrarMaximo(vector,TAM);
    printf("El maximo es %d\n",maximo);
    posicion=devolverPosicion(vector,TAM,numero);
    printf("El numero %d se encuentra en la posicion %d",numero,posicion);
    /*for(i=0;i<TAM;i++)
    {
        printf("%d --- %d\n",i,vector[i]);
    }*/


    /**
    for(i=0;i<5;i++)
    {
        printf("Ingrese numero : ");
        scanf("%d",&vector[i]);

    }

    for(i=0;i<5;i++)
    {
        printf("%d   ",vector[i]);
    }
    **/
 return 0;
}



