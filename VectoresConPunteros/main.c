#include <stdio.h>
#include <stdlib.h>
void mostrar(int *puntero, int cantidad);
int main()
{
    int numeros[3];
    int *puntero;
    puntero=numeros; //Un puntero es equivalente a un vector con la diferencia de que no es estatico

    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;

    printf("Puntero: %p\n", puntero);
    printf("Punttero: %d\n", puntero);
    printf("Numeros: %p\n", numeros);
    printf("Numeros: %d\n", numeros);

    mostrar(numeros, 3);

    return 0;
}

void mostrar(int *puntero, int cantidad)
{
    int i;
    for(i=0; i <cantidad; i++)
    {
        //printf("%d\n", *puntero+i); //Esto Muestra el valor de la poscicion i y le suma 1 en las siguientes iteraciones
        printf("%d\n", puntero+i); //Con esto muestro la direccion de memoria en la poscicion i
        printf("%d\n", *(puntero+i)); //Con esto se muestra el valor en la poscicion i
    }
}
