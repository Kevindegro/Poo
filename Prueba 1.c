#include <stdio.h>
#include <stdlib.h>

int main (){
	float año;
	puts("Ingrese un año");
	scanf("%f", &año);
	
	if(año / 4){
		if(año == 0){
				if(año / 100 && año / 400){
			printf("Es bisiesto"); //esta mal no me salio :)
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
		
		if(a>=0){ //Para verificar que el numero es positivo
			int b;
			for(int i=0;i<=10;i++){ //Hago una repeticion que sucede 10 veces (para no hacer 10 if)
				b=a*i;
				printf("%d x %d=%d\n", a, i, b); //Imprimo el numero ingresado nultiplicado por x numero y coloco el resultado reutilizando b
			}
			return 0;
		}
		//Simplemente te tira "error" porque el numero que coloca el usuario no es positivo
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
	
	//la secuencia de if generan el descuento segun la cantidad de tickets que compraron (maximo 4 y no menor a 0)
	if(t<=4 && t>0){
		if(t==2){
			T=(p*t)*0.90; //Aplico el descuento
			printf("El precio Total es de:%f", T);
			return 0;
		}else if(t==3){
				T=(p*t)*0.85;// x2
				printf("El precio Total es de:%f", T);	
				return 0;
		}else if(t==4){
				T=(p*t)*0.80;//x3
				printf("El precio Total es de:%f", T);
				return 0;	
		}
	}	
	//Imprime el precio en el caso que sea un solo ticket
	printf("El precio total es de:%f", p);
}

//punto 4
int main(){
	int T;
	int p;
	puts("Ingrese la cantidad de personas");
	scanf("%d", &p);
	
	if(p>=200 && p<=300){ //mientas que la cantidad de personas sea entre 200 y 300 se cambia el precio 
		T=p*5500;
		printf("El total a pagar es de:%d", T);
		return 0;
	}else if(p>=300){ // mientras que sea mayor a 300 cambia el precio
		T=p*4500;
		printf("El total a pagar es de:%d", T);
		return 0;
	}
	// en el caso que sean menores a 200 personas tendran que pagar el precio fijo
	T=p*6500;
	printf("El total a pagar es de:%d", T);
	return 0;
}

//punto 5
int main(){
	char tipo;
	int tamaño;
	int cant;
	puts("Ingrese el tipo: A o B");
	scanf("%s", &tipo);
	
	puts("Ingrese el tamaño: 1 o 2");
	scanf("%d",&tamaño);
	
	puts("Ingrese la cantidad a comprar");
	scanf("%d", &cant);
	
	int T=0;
	
	if(tipo=='A' && tamaño==1){
		T=cant*200;
		printf("El total es de:%d", T);
		return 0;	
	}else if(tipo=='A' && tamaño==2){
		T=cant*300;
		printf("El total es de:%d", T);
		return 0;	
	}else if(tipo=='B' && tamaño==1){
		T=cant*300;
		printf("El total es de:%d", T);
		return 0;	
	}else if(tipo=='B' && tamaño==2){
		T=cant*500;
		printf("El total es de:%d", T);
		return 0;	
	}
	printf("El tamaño o el tipo ingresado es incorrecto");
	return 0;
}
