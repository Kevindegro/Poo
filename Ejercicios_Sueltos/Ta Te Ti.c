#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char * argv[]){
    srand(time(NULL));

    int turno = (rand()% (2)) + 1;

    printf("El jugador 1 es la 'O' y el jugador 2 es la 'X\n\n");
    char tablero [3][3];
    
    printf("Comienza el jugador %d\n", turno);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tablero [i][j] = '*';
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }

    int intentos=1;

    while(intentos <= 9){
        int posicion1=0;
        int posicion2=0;


        if(turno == 1){
            printf("(Jugador 1) Seleccione la fila: ");
            scanf("%d", &posicion1);
            printf("(Jugador 1) Seleccione la columna: ");
            scanf("%d", &posicion2);
            if(tablero [posicion1-1][posicion2-1] = 'X'){
                printf("Perdes el turno por equivocarte");
                break;
            }
            tablero [posicion1-1][posicion2-1] = 'O';
            printf("\n");
            if(tablero [0][0] = 'X' && tablero [0][1] = 'X' && tablero [0][2] = 'X' ||
            tablero [1][0] = 'X' && tablero [1][1] = 'X' && tablero [1][2] = 'X' ||
            tablero [2][0] = 'X' && tablero [2][1] = 'X' && tablero [2][2] = 'X' ||
            tablero [0][0] = 'X' && tablero [1][0] = 'X' && tablero [2][0] = 'X' ||
            tablero [0][1] = 'X' && tablero [1][1] = 'X' && tablero [2][1] = 'X' ||
            tablero [0][2] = 'X' && tablero [1][2] = 'X' && tablero [2][2] = 'X' ||
            tablero [0][0] = 'X' && tablero [1][1] = 'X' && tablero [2][2] = 'X' ||
            tablero [0][2] = 'X' && tablero [1][1] = 'X' && tablero [2][0] = 'X'){
                printf("Ganaste algo en tu vida");
                break;
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%c ", tablero[i][j]);
                }
                printf("\n");
            }
            
            turno++;
            intentos++;
        }

        if(turno == 2){
            printf("(Jugador 2) Seleccione la fila: ");
            scanf("%d", &posicion1);
            printf("(Jugador 2) Seleccione la columna: ");
            scanf("%d", &posicion2);
            tablero [posicion1-1][posicion2-1] = 'X';
            printf("\n");
            if(tablero [posicion1-1][posicion2-1] = 'O'){
                printf("Perdes el turno por equivocarte");
                break;
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%c ", tablero[i][j]);
                }
            printf("\n");
            }
            if(tablero [0][0] = 'O' && tablero [0][1] = 'O' && tablero [0][2] = 'O' ||
            tablero [1][0] = 'O' && tablero [1][1] = 'O' && tablero [1][2] = 'O' ||
            tablero [2][0] = 'O' && tablero [2][1] = 'O' && tablero [2][2] = 'O' ||
            tablero [0][0] = 'O' && tablero [1][0] = 'O' && tablero [2][0] = 'O' ||
            tablero [0][1] = 'O' && tablero [1][1] = 'O' && tablero [2][1] = 'O' ||
            tablero [0][2] = 'O' && tablero [1][2] = 'O' && tablero [2][2] = 'O' ||
            tablero [0][0] = 'O' && tablero [1][1] = 'O' && tablero [2][2] = 'O' ||
            tablero [0][2] = 'O' && tablero [1][1] = 'O' && tablero [2][0] = 'O'){
                printf("Ganaste algo en tu vida");
                break;
            }
            turno--;
            intentos++;
        }
    }
}
