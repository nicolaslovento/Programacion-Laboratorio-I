#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   char palabra1[15];//14 lugares.Ya que se reserva uno.
    char palabra2[15];
    char buffer[1024];
    int cant;
    int comparacion;

    printf("Ingrese una palabra\n");
    fflush(stdin);//limpia el buffer
    gets(buffer);//funcion para leer cadenas
    while(strlen(buffer)>14)//generar espacio de memoria para q el usurario escriba lo que quiera pero validando para que no desborde el array
    {
        printf("Reingrese una palabra\n");
        fflush(stdin);
        gets(buffer);
    }
    //recibe dos cadenas "perro" y "gato", pb1[i] pb2[i]Compara con el ASCII,si no da 0 es distinto.
    comparacion=strcmp(palabra1,palabra2);//funcion para comparar palabras. Ordenar alfabeticamente.
    //stricmp no distingue mayusculas
    printf("El resultado de la comparacion es : %d",comparacion);
    cant=strlen(palabra1);//tamaño del texto ingresado
    printf("%d \n",cant);
    //copio palabra1 a palkabra2. Incluyo la biblioteca y luego uso string copy.

    strcpy(palabra2,"luna");//destino. origen

    printf("%s",palabra2);

    strupr();//convierte todo a mayuscula
    strlwr();//todo a mayuscula
    strcat(buffer,palabra2);//concatenar palabras. DE A PARES.

    return 0;
}
