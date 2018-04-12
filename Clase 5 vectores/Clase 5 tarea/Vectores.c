#include "Vectores.h"
#include <stdio.h>


void buscarChar(char vec[],int tamanio,char letra)
{   int i;
    for(i=0;i<tamanio;i++)
    {
        if(vec[i]==letra)
        {
            return printf("Se encontro la %c en la posicion %d del vector \n",letra,i);

        }
    }
    return printf("No se encontro la %c en el vector",letra);
 }


/** \brief
 *
 * \param int[]
 * \param int
 * \return int
 *
 */
int cantidadNumPares(int vec[],int tamanio)
{   int i;
    int pares=0;
    for(i=0;i<tamanio;i++)
    {
        if(vec[i]%2==0)
        {
            pares++;
        }
    }

    return pares;

}


/** \brief Recorre el vector y si encuentra el numero devuelve la posicion del numero en el vector.Sino devuelve -1.
 *
 * \param int vec[] Vector
 * \param int tamanio tamaño del vector
 * \param int numero Numero a encontrar en el vector
 * \return int Retorna la posicion, sino -1
 *
 */
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
