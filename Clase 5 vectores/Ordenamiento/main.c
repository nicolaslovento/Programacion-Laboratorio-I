#include <stdio.h>
#include <stdlib.h>

int main()
{   //Metodo de ordenamiento "burbujeo".
    //int vector[5]={5,2,8,6,5};
    char vector[5]={'a','e','u','q','b'};
    int i,j;
    int aux;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
            {
                if(vector[i]>vector[j])
                {
                    aux=vector[i];
                    vector[i]=vector[j];
                    vector[j]=aux;
                }
            }
    }

    for(i=0;i<5;i++)
    {

        printf(" %d \n",vector[i]);
    }




    //swap //metodos de ordenamiento
    int a=9;
    int b=5;
    int c;

    return 0;
}
