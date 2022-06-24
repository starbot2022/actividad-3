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

int main()
{
        float apr = 0;
        float repr = 0;
        float promedio = 0;
        int i = 0;
        char letra;
        do
        {
                printf("\nIntroduce S para continuar, otra tecla para salir: ");
                scanf("%s", &letra);
                if (letra == 'S')
                {
                        float cal;
                        printf("\nCalificación del Alumno: ");
                        scanf("%f", &cal);
                        if (cal >= 4)
                        {
                                apr++;
                                promedio += cal;
                                i++;
                                printf("\nAprobado");
                        }
                        else
                        {
                                repr++;
                                printf("\nReprobado");
                        }
                }
        } while (letra == 'S');
        promedio /= i;
        printf("\n Porcentaje de Alumnos Aprovados: %f%%", apr / (apr + repr) * 100);
        printf("\n Promedio de Estudiantes Aprovados: %f", promedio);
        printf("\nPresiona ENTER para salir...");
        getchar();
        getchar();
        return 0;
}