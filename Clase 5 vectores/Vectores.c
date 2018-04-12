#include "Vectores.h"
#include <stdio.h>

int devolverPosicion(int vec[],int tamanio,int numero)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
      if(vec[i]==numero)
      {
          return i;
      }
    }

    return -1;


}


void cargarVector(char mensaje[],int vec[],int tamanio)
{   int i;
    for (i=0;i<tamanio;i++)
    {
        printf("%s ",mensaje);
        scanf("%d",&vec[i]);
    }
  }

void modificarValor(int vector[])
{
    vector[3]=999;

}

int encontrarMaximo(int vec[],int tamanio)
{   int i;


    int flag=0;
    int maximo=0;
    for(i=0;i<tamanio;i++)
    {

        if(flag==0 || vec[i]>maximo)
        {
            maximo=vec[i];
            flag++;

        }
       /* if(flag==0)
        {
            maximo=vec[i];
            flag++;
        }else
        {
            if(maximo<vec[i])
            {
                maximo=vec[i];
            }
        }*/
     }
     return maximo;
}
void mostrarVector(int vec[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("%d --- %d \n",i,vec[i]);

    }
}
