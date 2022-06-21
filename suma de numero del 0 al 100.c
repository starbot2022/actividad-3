
//escribir un programa que muestre la sumatoria de los numeros del 0 al 100

#include <stdio.h>
int main(){
	
	int num = 100;
	int sum = 0;
	

	for (int i=0; i<=num; i++){
		
		sum += i;
	}
	printf("la suma total es :%d", sum);
	
}