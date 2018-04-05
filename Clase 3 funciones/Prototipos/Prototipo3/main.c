#include <stdio.h>
#include <stdlib.h>

//recibe y no retorna
void suma(int,int);

int main()
{
    int num1;
    int num2;
    printf("Ingrese primer numero \n");
    scanf("%d",&num1);
    printf("Ingrese segundo numero \n");
    scanf("%d",&num2);
    suma(num1,num2);
    return 0;
}

void suma(int num1,int num2)
{
    int sumas;
    sumas=num1+num2;
    printf("La suma es %d ",sumas);

}
