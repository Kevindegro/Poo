#include <stdio.h>
#include <stdlib.h>
//Determinar si un valor numérico positivo, mayor que cero ingresado es par o impar.

int main (){

    int n;
    puts("Ingrese un valor positivo que sea mayor a 0");
    scanf("%d", &n);
    if(n>0){
        int r=n%2;
        if(r==0){
            printf("El numero es positivo");
            return 0;
        }
        printf("El numero es negativo");
        return 0;
    }
    printf("ERROR El numero es menor a 0");
    return 0;

}
