/*
Escribir un programa para solicitar al usuario que ingrese números enteros
positivos (la cantidad que ingresará no se conoce y la decide el usuario). La
lectura de números finalizará cuando el usuario ingrese el número -1. Por cada
número ingresado, mostrar la cantidad de dígitos pares y la cantidad de dígitos
impares que tiene. Al finalizar, mostrar cuántos números múltiplos de 3 ingresó
el usuario.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 64;
    char temp[length];
    int multiplos = 0;
    do
    {
        printf("Ingrese un numero positivo: ");
        scanf("%s", &temp);
        int even = 0;
        int odd = 0;
        int i = 0;
        while (temp[i] != '\0' && atoi(temp) != -1)
        {
            char caracter[2] = {temp[i], '\0'};
            int num = atoi(caracter);
            if (num % 2 != 0)
                odd++;
            else
                even++;
            i++;
        }
        if (atoi(temp) % 3 == 0)
            multiplos++;
        if (atoi(temp) != -1)
        {
            printf("Digitos pares: %d", even);
            printf("\nDigitos impares: %d", odd);
        }
    } while (atoi(temp) != -1);
    printf("\nMultiplos de 3: %d", multiplos);
    printf("\nPresiona ENTER para salir...");
    getchar();
    getchar();
    return 0;
}