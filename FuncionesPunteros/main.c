#include <stdio.h>
#include <stdlib.h>

void intercambiar(int num1, int num2);
void intercambiarPunteros(int *num1, int *num2);
void ponerEnCero(int *num1);

int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;
    ponerEnCero(&edadDos);

    printf("\nEdad 1: %d", edadUno);
    printf("\nEdad 2: %d", edadDos);

    /*
    intercambiar(edadUno, edadDos); //No sirve

    printf("\nEdad 1: %d", edadUno);
    printf("\nEdad 2: %d", edadDos);
    */
    intercambiarPunteros(&edadUno, &edadDos);

    printf("\nEdad 1: %d", edadUno);
    printf("\nEdad 2: %d", edadDos);

    return 0;
}

void intercambiar(int num1, int num2)
{
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}

void intercambiarPunteros(int *num1, int *num2)
{
    if(*num1 != NULL && *num1 != NULL) //Comprobar siempre que los punteros pasados por parametros no sean NULL
    {
        int aux;
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }
}

void ponerEnCero(int *num1)
{
    *num1=0;
}
