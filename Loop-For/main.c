#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Loop For\n");

    int UpperLim, BottomLim;

    printf("Imprimir en orden descendiente\n");

    printf("Ingresa el limite superior\n");
    scanf("%i", &UpperLim);

    printf("Ingresa el limite inferior\n");
    scanf("%i", &BottomLim);

    for(int i = UpperLim; i >= BottomLim; i--)
    {
        printf("Numero; %i\n", i);
    }



    return 0;
}
