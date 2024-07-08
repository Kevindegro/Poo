#include <stdio.h>

// Declaración de funciones
void carga(int n, int Vector[]);
void imprimir(int n, int Vector[]);
void ordenar(int n, int Vector[]);

int main() {
    int n = 5; // Declaración e inicialización de la variable n a 5
    int V[n]; // Declaración del array V de tamaño n

    // Llamada a la función carga para llenar el array V
    carga(n, V);
    
    // Llamada a la función imprimir para mostrar los valores del array V
    imprimir(n, V);

    // Llamada a la función ordenar para ordenar el array V
    ordenar(n, V);
    
    // Llamada a la función imprimir para mostrar los valores ordenados del array V
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
    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor de la posicion %d: ", i);
        scanf("%d", &Vector[i]);
    }
}

// Definición de la función imprimir
void imprimir(int n, int Vector[]) {
    for (int i = 0; i < n; i++) {
        printf("\n %5d", Vector[i]);
    }
    printf("\n");
}

// Definición de la función ordenar
void ordenar(int n, int Vector[]) {
    int aux;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (Vector[i] > Vector[j]) { // Error: Debería ser Vector[i] < Vector[j]
                aux = Vector[i];
                Vector[i] = Vector[j];
                Vector[j] = aux;
            }
        }
    }
    printf("\n");
}

/*Salida esperada:


Salida esperada:

El programa solicitará al usuario que ingrese 5 valores enteros, uno por cada posición del array.
Imprimirá estos valores.
Ordenará el array.
Imprimirá los valores ordenados.
Finalmente, imprimirá los valores ordenados nuevamente en el bucle for en main.

*/

/*Errores

Ordenación incorrecta: El algoritmo de ordenación está mal implementado. La condición en el if debería ser if (Vector[i] < Vector[j]) para ordenar de menor a mayor. Con if (Vector[i] > Vector[j]), el array se ordenará de mayor a menor.
Asignación de tamaño a V.
Funciones carga, imprimir y ordenar: Las funciones funcionan correctamente para llenar, mostrar y ordenar (aunque de mayor a menor en este caso) el array.
*/
