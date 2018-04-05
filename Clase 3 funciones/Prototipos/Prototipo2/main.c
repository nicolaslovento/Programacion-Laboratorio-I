#include <stdio.h>
#include <stdlib.h>
//no recibe y retorna
int suma(void);

int main()
{
    int sumas;
    sumas=suma();
    printf("La suma es %d ",sumas);
    return 0;
}

int suma()
{
    int num1;
    int num2;
    int suma;
    printf("Ingrese primer numero \n");
    scanf("%d",&num1);
    printf("Ingrese segundo numero \n");
    scanf("%d",&num2);
    suma=num1+num2;

    return suma;
}
