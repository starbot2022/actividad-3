#include <stdio.h>

int main() {

	int num;


	    printf("ingrese numero a dividir: ");
	scanf("%d",&num);

	for (int i=1; i <= num; i++) {

		if (num % i==0)
			printf("\n%d es divisible entre %d",num,i);
			
			
	}
}