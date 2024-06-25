#include <stdio.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int N=15;
    int a=srand() % 15;
    char tablero[N][N];

    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            tablero[i][j]='X';
            printf("%c", tablero[i][j]);
        }
        printf("\n");
    }




    return 0;
}
