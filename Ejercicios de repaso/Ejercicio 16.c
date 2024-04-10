#include <stdio.h>
#include <stdlib.h>

int main (){

	float d;
	puts("La unidad cambiaria");
	scanf("%f", &d);
	
	float a;
	puts("Ingrese cantidad de pesos");
	scanf("%f", &a);
	
	float t = a / d ;
	
	printf("%f", t);
}
