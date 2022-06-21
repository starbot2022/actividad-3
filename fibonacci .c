//hacer un programa que muestre la sumatoria de todos los numeros entre el 0 y el 100


#include<stdio.h>
int main(){
	
	int lenght=10;
	int x=0;
	int y=1;
	int z=1;


 for(int i=1; i<lenght;i++){
 
     z= x + y;
 	x = y;
 	y = z;
 	 
 	printf("%i, " , z);
 	
 }	
		return 0;
	
}