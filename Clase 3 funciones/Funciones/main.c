#include <stdio.h>
#include <stdlib.h>
/**Primer instancia: declaraci�n de la funci�n-prototipo de la funci�n
    -tipo de dato devuelto (int,float,char,void,double,long,etc)
    -nombre de la funci�n(representativo a la funci�n.Verbo+objeto)
    -tipo de dato devuelto:identificador(par�metros de entrada.Son opcionales.)
    declaro una variable por cada parametro que va a recibir la funci�n
*/

//declaro funci�n 1
void mostrarMensaje(int );


int main()
{   //llamada a la funci�n 3
    int numero;

    printf("Ingrese numero: ");
    scanf("%d",&numero);
    mostrarMensaje(numero);//parametro actual
    return 0;
}
//variable numero son diferentes al estar en dos funciones distintas.
//desarrollo de la funci�n 2

void mostrarMensaje(int numero)//parametro formal
{

    printf("El numero ingresado es: %d", numero);

}
