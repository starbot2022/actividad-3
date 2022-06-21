#include <stdio.h>

int main()
{
        float num, b, c;
        printf("Inserte numero 1 ");
        scanf("%f", &num);
        
        printf("Inserte numero 2 ");
        scanf("%f", &b);
        if (num < b)
                num = b;

        printf("Inserte numero 3 ");
        scanf("%f", &c);
        if (num < c)
                num = c;

        printf("El numero mayor es:  %f", num);
        printf("\nPulse cualquier tecla para salir");
        getchar();
        getchar();

        return 0;
}