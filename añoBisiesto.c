/*
Escribir un programa que permita saber si un año es bisiesto. Para que un año
sea bisiesto debe ser divisible por 4 y no debe ser divisible por 100, excepto
que también sea divisible por 400.
*/

#include <stdio.h>

int main()
{
        unsigned int year;
        printf("Introduce un año: ");
        scanf("%d", &year);
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 && year >= 0)
        {
                printf("Es un año bisiesto");
        }
        else
        {
                printf("No es un año bisiesto");
        }
        printf("\nPresione ENTER para salir");
        getchar();
        getchar();
        return year;
}