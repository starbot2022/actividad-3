/*
Escribir un programa que, dado un número entero por el usuario (guardado
como int), muestre la suma de todos sus dígitos
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
        int length = 64;
        char num[length];

        printf("Ingrese un numero positivo: ");
        scanf("%s", &num);
        int sum = 0;
        int i = 0;
        while (num[i] != '\0')
        {
                char caracter[2];
                caracter[0] = num[i];
                caracter[1] = '\0';
                int num = atoi(caracter);
                sum += num;
                i++;
        }
        printf("%d", sum);
        printf("\nPresiona ENTER para salir...");
        getchar();
        getchar();
        return 0;
}