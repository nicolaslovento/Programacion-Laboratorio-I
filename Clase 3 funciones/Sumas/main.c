#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

void sumar1(void);

int main()
{
    sumar1();
    return 0;
}

void sumar1(void)
{
    int num1;
    int num2;
    int suma;

    num1=pedirEntero("primer numero",1,1000);
    num1=pedirEntero("\n segundo numero",1,1000);

    suma=num1+num2;

    printf("La suma es %d ",suma);


}
