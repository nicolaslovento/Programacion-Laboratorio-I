#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE* f;
    char msj []="Hola a todos";

    f=fopen("dise�o.html","w");

    if(f!=NULL)
    {
        fprintf(f,"<html><head>");
        fprintf(f,msj);
        fprintf(f,"</html></head>");
        fclose(f);
    }
    return 0;
}
