#include <stdio.h>
#include <stdlib.h>
//Funcion recursiva:Funcion que se llama a sí misma.

/** \brief Calcula el factorial de un numero
 *
 * \param Un numero
 * \param
 * \return EL factorial de el numero ingresado
 *
 */

int factorial(int);

int main()
{

   int numero=6;
   int factor;
   factor=factorial(6);
    printf("%d",factor);


    return 0;
}

int factorial(int numero)
{
    int respuesta;
    if(numero==0)
    {
        respuesta= 1;
    }else
    {
        respuesta= numero*factorial(numero-1);
    }


        return respuesta;
}




 /*int numero=5;
    int i;
    int factor=1;

    for(i=numero;i>=1;i--)
    {
        factor=factor*i;
    }

    printf("%d",factor);*/
