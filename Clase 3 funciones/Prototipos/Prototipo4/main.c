#include <stdio.h>
#include <stdlib.h>
void suma(void);

int main()
{
    suma();
    return 0;
}

void suma(void)
{
    int num1;
    int num2;
    int sumas;
    printf("Ingrese primer numero \n");
    scanf("%d",&num1);
    printf("Ingrese segundo numero \n");
    scanf("%d",&num2);
    sumas=num1+num2;
    printf("La suma es %d",sumas);

}
