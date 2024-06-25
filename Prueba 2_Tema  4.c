#include <stdio.h>
#include <time.h>


//Tortuga = 1.
//Liebre = 2.
//Pozo == O = Pierde una vida.
//Comodin == C = Liebre avanza 1 / Tortuga avanza el doble del dado sacado.

int main(){
    srand(time(NULL));
    int N=14;
    int a=0;
    int b=0;

    char tablero[N][N];

//Coloca la 'X' en la matriz
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            tablero[i][j]='X';
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }


//Coloca de forma aleatoria la O
    int contador1 = 0;
    while(contador1 !=2){
        a = rand();
        b = rand();
        if(tablero[a][b]== 'X'){
        tablero [a][b] = 'C';
        contador1++;
        }
    }
   
    
//Coloca de forma aleatoria la C
int contador2 = 0;
    while(contador2 !=2){
        a = rand();
        b = rand();
        if(tablero[a][b]== 'X'){
        tablero [a][b] = 'O';
        contador2++;
        }
    }


    return 0;
}
