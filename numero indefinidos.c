//programa que permita al usuario ingresar una cantidad de numeros positivos indefinidos 
//(la cantidad que ingresara no se conoce y puede cambiar en cada ejecucion 
//finalizando cuando ingresa el numero 0(que no se tendra en cuenta
//una vez terminada la lectura de numeros , informar cual fue el mayor de los numeros ingresados

#include <stdio.h>
int main(){
	
	
	int mayor = 0;
	int num;
do{
	
	
	printf("ingreze numero: ");
	scanf("%d",&num);
	
	if(num>mayor)
	mayor=num;
	
	
}while( num != 0);

	
	printf("el numero mayor es: %d ",mayor);
	
	
	
	
	return 0;
	
	
}