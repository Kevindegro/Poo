#include <stdio.h>
#include <stdlib.h>



void opcion1(){
    int N
    printf("Ingrese un numero\n");

    scanf("%d", &N);
    if(N>0){
    printf("Es positivo\n");
    }
    printf("Es negativo\n");
}

void opcion2(){
    int N
    printf("Ingrese un numero\n");
    scanf("%d", &N);

    int R= N%2;

    if(R=0){
        printf("Es positivo\n");
    }
    printf("Es negativo\n");
}

void opcion3(){
    int N
    printf("Ingrese un numero\n");
    scanf("%d", &N);

    if(N%2==0){
        printf("Es multiplo de 2\n");
    }
    printf("No es multiplo de 2\n");

    if(N%3==0){
        printf("Es multiplo de 3\n");
    }
    printf("No es multiplo de 3\n");

}

void opcion4(){
    int A;
    int B;
    int C;

    printf("Ingrese un numero\n");
    scanf("%d", &A);
    printf("Ingrese un segundo numero\n");
    scanf("%d", &B);
    printf("Ingrese un tercer numero\n");
    scanf("%d", &C);

    if(A=B & A=C){
        printf("Son todos iguales\n");
    }else{if(A>B & A>C){
            printf("El mayor es A\n");
        }}else{if(A>B & A<C){
                    printf("El mayor es C\n");
            }}else{if(A<B & B>C){
                    printf("El mayor es B\n");
            }}else{if(A<B & B<C){
                    printf("El mayor es C\n");
            }}
}

int main (int argc, *char argv[]){

    while(1){
        int opcion;
        puts("Selecciona una opcion\n");
        puts("Actividad 1");
        puts("Actividad 2");
        puts("Actividad 3");
        puts("Actividad 4");
        puts("Salir");

        scanf("%d", &opcion);

        swich(opcion){
        case 1:
            opcion1();
            break;
        case 2:
            opcion2();
            break;
        case 3:
            opcion3();
            break;
        case 4:
            opcion4();
            break;
        case 5:
            system("clear");
            puts("Chau");
            return 0;
        default:
            puts("No esta en la opciones");
        }
    }
    return 0;
}
