#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    //int* punteroNumero;
    int *punteroNumero;

    int numero;
    int numeroDos;

    numero = 66;

    //&numeroDos=&numero; //ERORR
    //numeroDos=&numero; //Asigna la memoria
    punteroNumero=&numero;
    numeroDos=*punteroNumero; //Asignacion de valor
    //*punteroNumero=&numero; //ERROR
    //*punteroNumero = 55; //ERROR

    printf("%d\n",numero);
    //printf("%d\n",&numero);
    //printf("%d\n",punteroNumero);
    //printf("%d\n",&punteroNumero);
    printf("%p\n",&numero); //Lo muestra en hexadecimal
    printf("%p\n",punteroNumero); //Lo muestra en hexadecimal
    printf("%p\n",&punteroNumero); //Lo muestra en hexadecimal
    printf("%d\n",*punteroNumero);
    printf("%p\n",numeroDos);

    /*
    Una de las desventajas de usar punteros es que si no lo inicializamos, este apunta a cualquier lado
    */

    return 0;
}
