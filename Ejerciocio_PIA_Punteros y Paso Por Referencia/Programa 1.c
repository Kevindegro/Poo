#include <stdio.h>

// Función para ordenar un arreglo usando el algoritmo de burbuja
void ordenar(int *arr, int n) {
    int i, j, temp;
    // Dos bucles anidados para comparar y ordenar los elementos
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            // Si el elemento actual es mayor que el siguiente, intercambiamos
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int nums[5]; // Arreglo para almacenar los 5 números ingresados
    int a, b, c, d, e; // Variables para almacenar los números ordenados

    printf("Ingrese 5 números:\n");
    // Bucle para ingresar los 5 números
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    // Llamada a la función ordenar para ordenar el arreglo
    ordenar(nums, 5);

    // Asignación de los valores ordenados a las variables
    a = nums[0];
    b = nums[1];
    c = nums[2];
    d = nums[3];
    e = nums[4];

    // Impresión de los números ordenados
    printf("Los números ordenados son:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("e: %d\n", e);

    return 0; // Retorno 0 para indicar que el programa terminó correctamente
}
