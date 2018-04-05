#include <stdio.h>
#include <stdlib.h>
//función que recibe y devuelve.
int suma(int,int);

int main()
{
    int numero1;
    int numero2;
    int sumas;
    printf("Ingrese primer numero \n");
    scanf("%d",&numero1);
    printf("Ingrese segundo numero\n");
    scanf("%d",&numero2);
    sumas=suma(numero1,numero2);
    printf("La suma es %d",sumas);

    return 0;
}


int suma(int num1,int num2)
{
    int suma;
    suma=num1+num2;
    return suma;

}
