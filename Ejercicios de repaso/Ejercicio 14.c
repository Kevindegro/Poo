#include <stdio.h>
#include <stdlib.h>

int main (){

	int a;
	puts("Ingrese un numero:");
	scanf("%d", &a);
	
	if(a<0){
		printf("%d",a * -1);
		return 0;
	}
	printf("%d", a);
	return 0;
}
