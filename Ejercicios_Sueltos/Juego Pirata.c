#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Create_Board (){
    
}

int main(int argc, char * argv[]){
    srand(time(NULL));
    int pirata1 = (rand()% 6) + 1;
    int pirata2 = (rand()% 6) + 1;
    int tesoro1 = (rand()% 6) + 1;
    int tesoro2 = (rand()% 6) + 1;
   int Tablero [8][8];

/*
Agua=0
Isla=1
Puente=2
Pirata=3
Tesoro=4

*/
   for (int i = 0; i < 8; i++){
        for(int j=0;j < 8; j++){
            Tablero[i][j]=1;
        }
   }

    for (int i = 0; i <8 ; i++){
        for (int j = 0; j <8 ; j+=7){
            Tablero[i][j]=0;
        }
    }  
        for (int i = 0; i <8 ; i+=7){
        for (int j = 0; j <8 ; j++){
            Tablero[i][j]=0;
        }
    }
    Tablero[0][7]=2;
    Tablero[7][0]=2;
    Tablero[pirata1][pirata2]=3;
    Tablero[tesoro1][tesoro2]=4;
    
    if (Tablero[pirata1][pirata2] == Tablero[tesoro1][tesoro2]) {
        
    } else {
        for (int i = 0; i < 8; i++){
        for(int j=0;j < 8; j++){
            printf("%d ", Tablero[i][j]);
        }
        printf("\n");
   }
    }
    

    


   return 0;
}
