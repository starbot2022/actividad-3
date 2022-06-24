/*
 Escribir un programa que, dado un número entero positivo, calcule y muestre
su factorial. El factorial de un número se obtiene multiplicando todos los
números enteros positivos que hay entre el 1 y ese número. El factorial de 0 es
1.
*/

#include <stdio.h>

int main()
{
        long int num;
        unsigned int factorial = 1;
        printf("Introduce un numero entero: ");
        scanf("%d", &num);
        if (num < 0)
        {
                printf("Error numero invalido");
                printf("\nPresiona ENTER para salir...");
                getchar();
                getchar();
                return 0;
        }
        if (num == 0 || num == 1)
        {
                printf("El factorial de %d", num, " es %d", factorial);
                printf("\nPresiona ENTER para salir...");
                getchar();
                getchar();
                return factorial;
        }
        for (unsigned int i = 1; i <= num; i++)
        {
                factorial *= i;
        }
        printf("Su factorial es: %d", factorial);
        printf("\nPresiona ENTER para salir...");
        getchar();
        getchar();
        return factorial;
}