#include <stdio.h>
#include <stdlib.h>

int main(){
	int p=50;
	int h=20;
	int c=0;
	
	while(p != (h * 2)){
		p= p + 1;
		h= h + 1;
		c= c + 1;
	}
	printf("%d", c);
}
