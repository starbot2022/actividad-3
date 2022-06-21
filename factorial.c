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