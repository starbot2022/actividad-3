#include <stdio.h>

int main()
{
        unsigned int year;
        printf("Introduce un año: ");
        scanf("%d", &year);
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
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