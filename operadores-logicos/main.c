#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores Logicos!\n");

    float valA = 5;
    float valC = 10;
    float valB = valC;


    if ((valA < valB) && (valB == valC))
        printf("Se cumplieron las dos condiciones\n");
    else
        printf("No se cumplieron las dos condiciones\n");

    if ((valA > valB) || (valB <= valC))
        printf("Se cumple pro lo menos una de las dos condiciones\n");
    else
        printf("No se cumplieron las condiciones\n");

    return 0;
}
