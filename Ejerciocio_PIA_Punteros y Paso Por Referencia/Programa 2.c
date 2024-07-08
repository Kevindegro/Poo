#include <stdio.h>
int main() {
    int x, *y;
    x = 10;           // Asigna el valor 10 a la variable x
    y = &x;           // Asigna la dirección de memoria de x a y
    printf("%d %d %d", y, *y, &y ); // Imprime la dirección de x, el valor de x, y la dirección de y
    return 0;
}


/*Devuelve:
Una dirección de memoria (la dirección de x).
El valor 10 (el valor de x).
Otra dirección de memoria (la dirección de y).
*/
