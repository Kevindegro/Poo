//Programa 1

#include <stdio.h>

#define FILAS 4
#define COLUMNAS 3

// Crea la matriz a partir de los números ingresados por el usuario
void crear_matriz(int matriz[FILAS][COLUMNAS]) {
    int i, j;
    printf("Ingrese los 12 números para llenar la matriz (de izquierda a derecha y de arriba hacia abajo):\n");
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Dibuja la matriz en pantalla
void dibujar_matriz(int matriz[FILAS][COLUMNAS]) {
    int i, j;
    printf("Matriz:\n");
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Calculaa y muestra la suma de la diagonal principal
int suma_diagonal_principal(int matriz[FILAS][COLUMNAS]) {
    int suma = 0;
    int i;
    for (i = 0; i < FILAS && i < COLUMNAS; i++) {
        suma += matriz[i][i];
    }
    return suma;
}

// Calcula y muestra la suma de la diagonal secundaria
int suma_diagonal_secundaria(int matriz[FILAS][COLUMNAS]) {
    int suma = 0;
    int i, j;
    for (i = 0, j = COLUMNAS - 1; i < FILAS && j >= 0; i++, j--) {
        suma += matriz[i][j];
    }
    return suma;
}

// Calcula y muestra la suma de la primera y última fila
void suma_primera_ultima_fila(int matriz[FILAS][COLUMNAS]) {
    int suma_primera_fila = 0;
    int suma_ultima_fila = 0;
    int j;
    for (j = 0; j < COLUMNAS; j++) {
        suma_primera_fila += matriz[0][j];
        suma_ultima_fila += matriz[FILAS - 1][j];
    }
    printf("Suma primera fila: %d\n", suma_primera_fila);
    printf("Suma última fila: %d\n", suma_ultima_fila);
}

// Calcula y muestra la suma de la primera y última columna
void suma_primera_ultima_columna(int matriz[FILAS][COLUMNAS]) {
    int suma_primera_columna = 0;
    int suma_ultima_columna = 0;
    int i;
    for (i = 0; i < FILAS; i++) {
        suma_primera_columna += matriz[i][0];
        suma_ultima_columna += matriz[i][COLUMNAS - 1];
    }
    printf("Suma primera columna: %d\n", suma_primera_columna);
    printf("Suma última columna: %d\n", suma_ultima_columna);
}

int main() {
    int matriz[FILAS][COLUMNAS];
    int opcion;
    //Solo es un swich generico de toda la vida dentro de un While(1) para que el usuario decida cuando termina
    while (1) {
        printf("\nMenú de opciones:\n");
        printf("1. Crear Matriz\n");
        printf("2. Dibujar Matriz\n");
        printf("3. Calcular y mostrar totales\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                crear_matriz(matriz);
                break;
            case 2:
                if (matriz[0][0] == 0) {
                    printf("Primero debe crear la matriz.\n");
                } else {
                    dibujar_matriz(matriz);
                }
                break;
            case 3:
                if (matriz[0][0] == 0) {
                    printf("Primero debe crear la matriz.\n");
                } else {
                    printf("\nResultados:\n");
                    printf("Suma diagonal principal: %d\n", suma_diagonal_principal(matriz));
                    printf("Suma diagonal secundaria: %d\n", suma_diagonal_secundaria(matriz));
                    suma_primera_ultima_fila(matriz);
                    suma_primera_ultima_columna(matriz);
                }
                break;
            case 4:
                printf("¡Hasta luego!\n");
                return 0;
            default:
                printf("Opción no válida. Por favor, seleccione nuevamente.\n");
                break;
        }
    }

    return 0;
}


//Programa 2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 20
#define COLUMNAS 20

// Crear una matriz con números aleatorios
void crear_matriz(int matriz[FILAS][COLUMNAS]) {
    int i, j;
    srand(time(NULL));

    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 100 + 1; // Números aleatorios entre 1 y 100
        }
    }
}

// Dibuja la matriz en pantalla
void dibujar_matriz(int matriz[FILAS][COLUMNAS]) {
    int i, j;
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Imprime solo la primera columna de la matriz
void imprimir_primera_columna(int matriz[FILAS][COLUMNAS]) {
    int i;
    for (i = 0; i < FILAS; i++) {
        printf("%d\n", matriz[i][0]);
    }
}

int main() {
    int matriz[FILAS][COLUMNAS];
    int opcion;
    //Solo es un swich generico de toda la vida dentro de un While(1) para que el usuario decida cuando termina
    while (1) {
        printf("\nMenú de opciones:\n");
        printf("1. Crear Matriz\n");
        printf("2. Dibujar Matriz\n");
        printf("3. Imprimir primera columna\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                crear_matriz(matriz);
                printf("Matriz creada.\n");
                break;
            case 2:
                if (matriz[0][0] == 0) {
                    printf("Primero debe crear la matriz.\n");
                } else {
                    printf("Matriz:\n");
                    dibujar_matriz(matriz);
                }
                break;
            case 3:
                if (matriz[0][0] == 0) {
                    printf("Primero debe crear la matriz.\n");
                } else {
                    printf("Elementos de la primera columna:\n");
                    imprimir_primera_columna(matriz);
                }
                break;
            case 4:
                printf("¡Hasta luego!\n");
                return 0;
            default:
                printf("Opción no válida. Por favor, seleccione nuevamente.\n");
                break;
        }
    }

    return 0;
}


//Programa 3

//No me dio el tiempo tenia que rendir lengua :(
