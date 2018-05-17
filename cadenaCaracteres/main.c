#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20]="MiNombre";
    char *apellido="MiApellido";
    char *puntero;
    puntero=nombre;
    printf("%s\n", nombre);
    printf("%s\n", apellido);
    //printf("%s\n", *apellido); // ERROR

    int i;

    //De esta forma sigue recorriendo el tamaño pero sin mostrar los \0
    /*
    for(i=0; i<11; i++)
    {
        if(*(apellido+i)!='\0')
        {
            printf("%c\n", *(apellido+i));
        }
    }*/

    //De esta forma para de recorrer cuando encuentr un \0
    for(i=0; *(apellido+i)!='\0'; i++)
    {
        printf("%c\n", *(apellido+i));
    }

    return 0;
}
