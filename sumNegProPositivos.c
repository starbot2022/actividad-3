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