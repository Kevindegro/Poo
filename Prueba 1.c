#include <stdio.h>
#include <stdlib.h>

int main (){
	float año;
	puts("Ingrese un año");
	scanf("%f", &año);
	
	if(año / 4){
		if(año == 0){
				if(año / 100 && año / 400){
			printf("Es bisiesto");
			return 0;
		}
		}
	}
	printf("NO es bisiesto ");
	return 0;
}

//punto 2
	int main(){
		int a;
		puts("Ingrese un numero");
		scanf("%d", &a);
		
		if(a>=0){
			int b;
			for(int i=0;i<=10;i++){
				b=a*i;
				printf("%d x %d=%d\n", a, i, b);
			}
			return 0;
		}
		printf("El numero es negativo solo se peude usar numeros positivos");
		return 0;
	}
	
	//punto 3
int main (){
	float t;
	float p = 100;
	puts("Ingrese la cantidad de tikets a comprar");
	scanf("%f", &t);
	float T;
	if(t<=4 && t>0){
		if(t==2){
			T=(p*t)*0.90;
			printf("El precio Total es de:%f", T);
			return 0;
		}else if(t==3){
				T=(p*t)*0.85;
				printf("El precio Total es de:%f", T);	
				return 0;
		}else if(t==4){
				T=(p*t)*0.80;
				printf("El precio Total es de:%f", T);
				return 0;	
		}
	}	
	printf("El precio total es de:%f", p);
}

//punto 4
int main(){
	
	int p;
	
	
	
	if(p>=200 && p<=300){
		
		
	}else if(personas>=300){
		
	}
}











