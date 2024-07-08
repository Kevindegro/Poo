#include <stdio.h>

// Declaración de funciones
void carga(int n, int Vector[]);
void imprimir(int n, int Vector[]);

int main() {
    int n = 5; // Declaración e inicialización de la variable n a 5
    int V[n]; // Declaración del array V de tamaño n

    // Llamada a la función carga para llenar el array V
    carga(n, V);
    
    // Llamada a la función imprimir para mostrar los valores del array V
    imprimir(n, V);

    printf("\n");

    // Bucle para imprimir los valores del array V con formato
    for (int i = 0; i < n; i++) {
        printf("%5d", V[i]);
    }

    return 0;
}

// Definición de la función carga
void carga(int n, int Vector[]) {
    int i;
    // Bucle para pedir al usuario que ingrese los valores del array
    for (i = 0; i < n; i++) {
        printf("Ingrese el valor de la posicion %d: ", i);
        scanf("%d", &Vector[i]);
    }
}

// Definición de la función imprimir
void imprimir(int n, int Vector[]) {
    // Bucle para imprimir los valores del array
    for (int i = 0; i < n; i++) {
        printf("\n %5d", Vector[i]);
    }
    printf("\n");
}



/*Salida esperada:
Salida esperada:

El programa solicitará al usuario que ingrese 5 valores enteros, uno por cada posición del array.
Luego imprimirá estos valores dos veces: una vez desde la función imprimir y otra vez desde el bucle for en main.

*/
