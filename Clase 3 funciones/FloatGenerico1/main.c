#include <stdio.h>
#include <stdlib.h>
//validar peso debe estar entre 0 y 150.
float pedirFloat(char[],int ,int );
float validarFloat(char [],float ,int ,int );

int main()
{
    float peso;

    peso=pedirFloat("peso",0,150);
    printf("Su peso es %f ",peso);



    return 0;
}

float validarFloat(char mensaje[],float numero,int min,int max)
{
    while(numero<min || numero>max )
    {
        printf("Reingrese %s :",mensaje);
        scanf("%f",&numero);
    }

    return numero;

}

float pedirFloat(char mensaje[],int min,int max)
{
    float numero;
    printf("Ingrese %s :",mensaje);
    scanf("%f",&numero);

    numero=validarFloat(mensaje,numero,min,max);

    return numero;

}






