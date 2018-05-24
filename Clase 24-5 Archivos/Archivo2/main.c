#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;

    f=fopen("diseño.html","w");

    if(f!=NULL)
    {
        fprintf(f,"<html><head>Hola aaa</head></html>");
        fclose(f);
    }



    return 0;
}
