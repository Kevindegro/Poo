#include <stdio.h>
#include <stdlib.h>

int main (){
    int A;
    int B;
    int C;
    puts("Ingrese un numero");
    scanf("%d", &A);
    puts("Ingrese un segundo numero");
    scanf("%d", &B);
    puts("Ingrese un tercer numero");
    scanf("%d", &C);

    float Prom=A+B+C;

    Prom=Prom/3;
    printf("El promedio es:%f", Prom);
    return 0;
}
