#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	int s=0;
	int m=0;
	int h=0;
	
	puts("Ingrese un numero para pasar a minutos y horas");
	scanf("%d", &a);
	
	s=a;

	while(s>=60){
		if(s>=60){
			s= s - 60;
			m++;
			if(m>=60){
				m= m - 60;
				h++;
			}
		}
	}
	printf("%d:%d:%d", h,m,s);
	return 0;
}
