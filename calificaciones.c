/*
Escribir un programa que pregunte al usuario si desea analizar calificaciones
de alumnos y, sólo si responde “S” comenzará el procesamiento de los datos,
hasta que el usuario ingrese algo diferente de “S”. Por cada alumno, permitir
ingresar su calificación. Si es mayor a 4 el alumno está aprobado. Finalmente,
mostrar “Porcentaje de alumnos aprobados: x %” (donde x es el porcentaje de
aprobados sobre el total de calificaciones procesadas). También se debe
imprimir “Promedio de los aprobados: y” (donde y es la calificación promedio,
sólo de los alumnos aprobados)
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{

        bool run = true;
        int apr = 0;
        int repr = 0;
        int i = 0;
        char letra[1];
        do
        {
                if (i % 2 == 0)
                {
                        printf("Introduce S para continuar: ");
                        scanf("%c", &letra);
                        if (letra == "S\0" || letra == "S\v" || letra == "S " || *letra == 'S')
                        {
                                printf("Calificación del Alumno: ");
                                float cal;
                                scanf("%f", &cal);
                                if (cal >= 4)
                                        apr++;
                                else
                                        repr++;
                        }
                        else
                        {
                                run = false;
                        }
                }
                else
                {
                        letra[1] = 'S';
                }
                i++;
        } while (run);
        // printf("\n %f", apr / (apr + repr));
        printf("\nPresiona ENTER para salir...");
        getchar();
        getchar();
        return 0;
}