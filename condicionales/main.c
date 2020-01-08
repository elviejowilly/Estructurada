#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion if\n");

    float valA, valB, valC;

    valA = valB = 100;

    printf("Primera Condicion \n");

    if(valA == valB)
        printf("Ambos son iguales \n");

    printf("Segunda Condicion \n");

    if(valA == valB)
    {
        printf("Ambos son iguales \n");
        valC = valA + valB;
        printf("Ademas la suma de ambos numeros es; %f \n", valC);
    }

    printf("\n");
    printf("Condicion if, else, else if\n");

    valA = 50;
    valB = 100;
    valC = 150;

    if(valA == valB)
        printf("No se va a cumplir esta condicion; %f \n");
    else if(valB==valC)
        printf(("Tampoco se va a cumplir esta\n"));
    else
    {
        printf("ninguna condicion se cumplio\n");
        printf("despues de esta linea el programa va a terminar\n");
    }





    return 0;
}
