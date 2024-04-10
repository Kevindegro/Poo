#include <stdio.h>
#include <stdlib.h>

int main (){

	float f;
	puts("Ingrese cantidad alumnas");
	scanf("%d", &f);
	float m;
	puts("Ingrese cantidad de alumnos");
	scanf("%d", &m);
	
	float T=m+f;
	
	float porcentaje_alumnos= (m / T) * 100;
	float porcentaje_alumnas= (f / T) * 100;
	
	printf("%f\n", porcentaje_alumnos);
	printf("%f", porcentaje_alumnas);
}
