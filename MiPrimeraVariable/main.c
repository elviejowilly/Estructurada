#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //int integerA;
    //float floatA;
    //char letterA;
    //double doubleA;

    //Vamos a ingresar valores a las variables
    //printf("Ingresa el valor del entero A: ");
    //scanf("%i", &integerA);

    //printf("Ingresa el valor del float A: ");
    //scanf("%f", &floatA);

    //printf("Ingresa el valor del double A: ");
    //scanf("%f", &doubleA);

    //printf("Ingresa el valor del caracter A: ");
    //scanf(" %c", &letterA);

    //En las siguientes lineas estamos imprimiendo mis variables individualmente
    //printf("El valor de nuestro entero A es: %i \n",integerA);

    //printf("El valor de mi flotante A es : %f \n", floatA);

    //printf("El valor de mi double A es: %f \n", doubleA);

    //printf("El valor de mi caracter A es: %c \n", letterA);


    //En las siguientes lineas estamos imprimiendo mis variables en una sola linea
    //printf("El valor de nuestro entero A es: %i ,\nEl valor de mi flotante A es : %f ,\nEl valor de mi double A es: %f ,\nEl valor de mi caracter A es: %c \n",integerA, floatA, doubleA, letterA);

    //Reto
    int x = 3;
    int y = 5;
    int intercambio;

    printf("el valor de x: %i \n", x);
    printf("el valor de y: %i \n", y);

    intercambio = y;
    printf("El valor de la variable x es: %i \n", intercambio);

    intercambio = x;
    printf("El valor de la variable y es: %i \n", intercambio);

    return 0;
}
