#include <stdio.h>
#include <stdlib.h>

int main (){

	int p;
	puts("Ingrese el precio base:");
	scanf("%d", &p);
	float T;
	T=p*0.85;
	
	printf("El precio final es:%f", T);
}
