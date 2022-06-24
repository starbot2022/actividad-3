/*
Escribir un programa que permita al usuario ingresar 6 números enteros, que
pueden ser positivos o negativos. Al finalizar, mostrar la sumatoria de los
números negativos y el promedio de los positivos. No olvides que no es posible
dividir por cero, por lo que es necesario evitar que el programa arroje un error
si no se ingresaron números positivos
*/

#include <stdio.h>

int main()
{
        int pos = 0;
        int neg = 0;
        for (int i = 0; i < 6; i++)
        {
                int temp;
                printf("Introduce un numero positivo o negativo ");
                scanf("%d", &temp);
                if (temp >= 0)
                        pos += temp;
                else
                        neg += temp;
        }
        if (pos != 0)
                pos /= 6;
        else
        {
                printf("ERROR; No se puede dividir entre cero");
                printf("\nPresiona ENTER para salir...");
                getchar();
                getchar();
                return 0;
        }
        printf("Promedio Positivos: %d", pos);
        printf("\nSuma de negativos: %d", neg);
        printf("\nPresiona ENTER para salir...");
        getchar();
        getchar();
        return 0;
}