#include <stdio.h>
#include <stdlib.h>

#define N 10

void cargar_matriz(int A[N][N], int filas, int columnas);
void escribir_matriz(int A[N][N], int filas, int columnas);
void sumar_matrices(int A[N][N], int B[N][N], int C[N][N], int filas, int columnas);
void multiplicar_matrices(int A[N][N], int B[N][N], int C[N][N], int m, int n, int p);
void transponer_matriz(int A[N][N], int T[N][N], int filas, int columnas);
int determinante_matriz(int A[N][N], int n);
void mostrar_menu();

int main() {
    int opcion;
    int A[N][N], B[N][N], C[N][N];
    int filas1, columnas1, filas2, columnas2;

    do {
        mostrar_menu();
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese filas y columnas de la matriz A: ");
                scanf("%d %d", &filas1, &columnas1);
                cargar_matriz(A, filas1, columnas1);
                break;

            case 2:
                printf("Ingrese filas y columnas de la matriz B: ");
                scanf("%d %d", &filas2, &columnas2);
                cargar_matriz(B, filas2, columnas2);
                break;

            case 3:
                printf("Matriz A:\n");
                escribir_matriz(A, filas1, columnas1);
                break;

            case 4:
                printf("Matriz B:\n");
                escribir_matriz(B, filas2, columnas2);
                break;

            case 5:
                if (filas1 == filas2 && columnas1 == columnas2) {
                    sumar_matrices(A, B, C, filas1, columnas1);
                    printf("Resultado de A + B:\n");
                    escribir_matriz(C, filas1, columnas1);
                } else {
                    printf("Las matrices deben tener las mismas dimensiones para sumar.\n");
                }
                break;

            case 6:
                if (columnas1 == filas2) {
                    multiplicar_matrices(A, B, C, filas1, columnas1, columnas2);
                    printf("Resultado de A * B:\n");
                    escribir_matriz(C, filas1, columnas2);
                } else {
                    printf("El número de columnas de A debe ser igual al número de filas de B para multiplicar.\n");
                }
                break;

            case 7:
                {
                    int T[N][N];
                    transponer_matriz(A, T, filas1, columnas1);
                    printf("Transpuesta de A:\n");
                    escribir_matriz(T, columnas1, filas1);
                }
                break;

            case 8:
                if (filas1 == columnas1) {
                    int det = determinante_matriz(A, filas1);
                    printf("Determinante de A: %d\n", det);
                } else {
                    printf("La matriz debe ser cuadrada para calcular el determinante.\n");
                }
                break;

            case 9:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }

    } while (opcion != 9);

    return 0;
}

void cargar_matriz(int A[N][N], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingresa la entrada [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
}

void escribir_matriz(int A[N][N], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
}

void sumar_matrices(int A[N][N], int B[N][N], int C[N][N], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplicar_matrices(int A[N][N], int B[N][N], int C[N][N], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transponer_matriz(int A[N][N], int T[N][N], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            T[j][i] = A[i][j];
        }
    }
}

int determinante_matriz(int A[N][N], int n) {
    int det = 0;
    if (n == 1) {
        return A[0][0];
    } else if (n == 2) {
        return (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    } else {
        int temp[N][N];
        int signo = 1;
        for (int f = 0; f < n; f++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == f) {
                        continue;
                    }
                    temp[subi][subj] = A[i][j];
                    subj++;
                }
                subi++;
            }
            det += signo * A[0][f] * determinante_matriz(temp, n - 1);
            signo = -signo;
        }
    }
    return det;
}

void mostrar_menu() {
    printf("\nMenu:\n");
    printf("1. Cargar matriz A\n");
    printf("2. Cargar matriz B\n");
    printf("3. Escribir matriz A\n");
    printf("4. Escribir matriz B\n");
    printf("5. Sumar matrices A y B\n");
    printf("6. Multiplicar matrices A y B\n");
    printf("7. Transponer matriz A\n");
    printf("8. Determinante de matriz A\n");
    printf("9. Salir\n");
    printf("Seleccione una opcion: ");
}
