#include <stdio.h>
#include <stdlib.h>
/**Primer instancia: declaración de la función-prototipo de la función
    -tipo de dato devuelto (int,float,char,void,double,long,etc)
    -nombre de la función(representativo a la función.Verbo+objeto)
    -tipo de dato devuelto:identificador(parámetros de entrada.Son opcionales.)
    declaro una variable por cada parametro que va a recibir la función
*/

//declaro función 1
void mostrarMensaje(int );


int main()
{   //llamada a la función 3
    int numero;

    printf("Ingrese numero: ");
    scanf("%d",&numero);
    mostrarMensaje(numero);//parametro actual
    return 0;
}
//variable numero son diferentes al estar en dos funciones distintas.
//desarrollo de la función 2

void mostrarMensaje(int numero)//parametro formal
{

    printf("El numero ingresado es: %d", numero);

}
