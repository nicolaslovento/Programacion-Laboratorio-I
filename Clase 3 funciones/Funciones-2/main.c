#include <stdio.h>
#include <stdlib.h>
//funciones genéricas
int pedirEntero(char[],int,int);
int validarEntero(char[],int numero,int mix,int max);
int main()
{   int edad;//18-60
    int legajo;//1-1000
    int nota;//1-10
    edad=pedirEntero(" edad :\n",18,60);
    legajo=pedirEntero(" legajo :\n",1,1000);
    nota=pedirEntero(" nota :\n",1,10);
    printf("Su edad es %d , su legajo %d y su nota es %d",edad,legajo,nota);

    return 0;
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

int pedirEntero(char mensaje[],int min,int max)
{
    int numero;
    printf("Ingrese %s",mensaje);
    scanf("%d",&numero);

    numero=validarEntero(mensaje,numero,min,max);

    return numero;

}
