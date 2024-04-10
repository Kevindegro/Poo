#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float s;
	puts("igrese su sueldo");
	scanf("%f", &s);
	float a;
	puts("Ingrese venta 1");
	scanf("%f", &a);
	float b;
	puts("Ingrese venta 2");
	scanf("%f", &b);
	float c;
	puts("Ingrese venta 3");
	scanf("%f", &c);
	
	a=a*0.10;
	printf("venta 1:%f ", a);
	
	b=b*0.10;
	printf("venta 1:%f ", b);
	
	c=c*0.10;
	printf("venta 1:%f ", c);
	
	printf("Su saldo total es de:%f", s+a+b+c);
}
