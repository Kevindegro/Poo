#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//El valor 3 se usa para mostrar que ambos jugadores estan en la misma posicion
//Tortuga = 1.
//Liebre = 2.
//Pozo == O = Pierde una vida.
//Comodin == C = Liebre avanza 1 / Tortuga avanza el doble del dado sacado.

int main(){
    srand(time(NULL));
    int L1=0;
    int turno=0;
    int L2=0;
    int T1=0;
    int T2=0;
    int FL=0;
    int FT=0;
    int N=14;
    int dado;
    int a;
    int b;
    int vidas_T=3;
    int vidas_L=3;
    char tablero[N][N];
    int Equipo;

    printf("Bienvenido al juego de la Liebre y la tortuga.\n             Seleccione un equipo:\n\n");
    printf("1-Equipo Tortuga\n2-Equipo Libre\n\n");
    scanf("%d", &Equipo);


//Llena la matriz con X
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            tablero[i][j]='X';
        }
    }


//Coloca de forma aleatoria la O
    int contador1 = 0;
    while(contador1 !=2){
        a = rand () % 14;
        b = rand() % 14;
        if(tablero[a][b]== 'X'){
        tablero [a][b] = 'C';
        contador1++;
        }
    }
   
    
//Coloca de forma aleatoria la C
int contador2 = 0;
    while(contador2 !=2){
        a = rand () % 14;
        b = rand() % 14;
        if(tablero[a][b] == 'X'){
        tablero [a][b] = 'O';
        contador2++;
        }
    }

//Imprime la matriz
   for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }



//bucle para relizar los movimientos y jugadas/elecciones.
    int bucle = 10;
    while(bucle>5){
        //Solo son variables temporales para limpiar la posicion anterior del jugador Toruga
        int k;
        int z;
        //Solo son variables temporales para limpiar la posicion anterior del jugador Liebre
        int h;
        int d;
        //Se utiliza para la eleccion del jugador
        int opciones;
        tablero[0][0] = 3;
        if(Equipo== 1){
            printf("\n\nElija una opcion:\n 1-Tirar dado.\n 2-Rendirse.\n\n");
            scanf("%d", &opciones);

            if(opciones == 1){
                dado = rand() % 6 + 1;
                k=T1;
                z=T2;
                if(tablero[T1][T2+dado] == 'C'){
                    dado=dado*2;
                }
                T2=T2+dado;
                if(T2== 14){
                    T1++;
                    T2=0;
                }
                //limpia la posicion anterior de la tortuga
                tablero[k][z]= 'X';

                //Coloca su nueva posicion
                tablero[T1][T2]= 'T';

                if(tablero [T1][T2] == 'O'){
                    printf("Perdiste, Gana la Liebre");
                    return 0;
                }
                

                //Movimiento de la Liebre
                dado = rand() % 6 + 1;
                h=L1;
                d=L2;
                if(tablero[L1][L2+dado] == 'C'){
                    dado=dado + 1;
                }
                L2=L2+dado;
                if(L2== 14){
                    L1++;
                    L2=0;
                }
                //limpia la posicion anterior de la tortuga
                tablero[h][d]= 'X';

                //Coloca su nueva posicion
                tablero[L1][L2]= 'L';

                if(tablero [T1][T2] == 'O'){
                    printf("Ganaste, La liebre se cayo");
                    return 0;
                }

                for(int i=0;i<=N;i++){
                    for(int j=0;j<=N;j++){
                        printf("%c ", tablero[i][j]);
                    }
                    printf("\n");
                }
            }
        }else
        if(Equipo == 2){
            printf("\n\nElija una opcion:\n 1-Tirar dado.\n 2-Rendirse.\n\n");
            scanf("%d", &opciones);

            if(opciones == 1){
                dado = rand() % 6 + 1;
                h=L1;
                d=L2;
                if(tablero[T1][T2+dado] == 'C'){
                    dado = dado + 1;
                }
                L2=L2+dado;
                if(L2== 14){
                    L1++;
                    L2=0;
                }
                //limpia la posicion anterior de la Liebre
                tablero[h][d]= 'X';

                //Coloca su nueva posicion
                tablero[L1][L2]= 'L';

                if(tablero [L1][L2] == 'O'){
                    printf("Perdiste, Gana la Tortuga");
                    return 0;
                }

                //Movimiento de la Tortuga
                dado = rand() % 6 + 1;
                k=T1;
                z=T2;
                if(tablero[T1][T2+dado] == 'C'){
                    dado=dado*2;
                }
                T2=T2+dado;
                if(T2== 14){
                    T1++;
                    T2=0;
                }
                //limpia la posicion anterior de la tortuga
                tablero[k][z]= 'X';

                //Coloca su nueva posicion
                tablero[T1][T2]= 'T';

                if(tablero [T1][T2] == 'O'){
                    printf("Ganaste, La Tortuga se cayo");
                    return 0;
                }


                for(int i=0;i<=N;i++){
                    for(int j=0;j<=N;j++){
                        printf("%c ", tablero[i][j]);
                    }
                    printf("\n");
                }
            }
        }
    }

    return 0;
}
