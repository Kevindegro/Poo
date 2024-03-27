#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
    for(int i=0;i<500;i++){
        int n = i;

        if((n*3)+3 == 87){
            printf("%d+%d+%d= 87", n,n+1, n+2);
            break;
        }
    }

}
