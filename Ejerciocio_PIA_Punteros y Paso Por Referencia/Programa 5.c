#define N 10 // Define una constante N con valor 10

#include <stdio.h>

// Declaración de funciones
void leer_matriz(int A[N][N], int filas, int columnas);
void escribir_matriz(int A[N][N], int filas, int columnas);
void multiplicar(int A[N][N], int B[N][N], int C[N][N], int m, int n, int p);

int main () {
    int m, n, p; // Declaración de variables para las dimensiones de las matrices
    int A[N][N], B[N][N], C[N][N]; // Declaración de las matrices de tamaño NxN

    // Lectura de las dimensiones y valores de la matriz A
    printf("\n Datos de la Matriz A: \n");
    printf("Filas: ");
    scanf("%d", &m);
    printf("Columnas: ");
    scanf("%d", &n);
    leer_matriz(A, m, n);

    // Lectura de las dimensiones y valores de la matriz B
    printf("\n Datos de la Matriz B: \n");
    printf("Columnas: ");
    scanf("%d", &p);
    leer_matriz(B, n, p);

    // Escritura de las matrices A y B
    printf("\n Matriz A:\n");
    escribir_matriz(A, m, n);
    printf("\n Matriz B: \n");
    escribir_matriz(B, n, p);

    // Multiplicación de las matrices A y B, resultado en la matriz C
    multiplicar(A, B, C, m, n, p);

    // Escritura de la matriz resultado C
    printf("\n Matriz AxB: \n");
    escribir_matriz(C, m, p);

    return 0;
}

// Definición de la función leer_matriz
void leer_matriz(int A[N][N], int filas, int columnas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingresa la entrada [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
}

// Definición de la función escribir_matriz
void escribir_matriz(int A[N][N], int filas, int columnas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
}

// Definición de la función multiplicar
void multiplicar(int A[N][N], int B[N][N], int C[N][N], int m, int n, int p) {
    int i, j, k;
    // Limpiar o inicializar matriz C
    for (i = 0; i < m; i++) {
        for (k = 0; k < p; k++) {
            C[i][k] = 0;
        }
    }

    // Multiplicación de matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < p; k++) {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }
}


/*Salida del Programa

El programa leerá dos matrices A y B, las imprimirá, multiplicará A por B, y finalmente imprimirá la matriz resultante C.

*/

/*Errores:

Definición de matrices: Se están utilizando matrices de tamaño N x N (10 x 10) independientemente del tamaño real necesario para la operación.
Lectura de dimensiones: El programa no verifica si las dimensiones ingresadas m, n y p son menores o iguales a N.
Multiplicación de matrices: La función multiplicar asume que las dimensiones son compatibles para la multiplicación de matrices.

*/
