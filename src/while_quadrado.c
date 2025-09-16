#include <stdio.h>
#include <stdlib.h>

int main(){
    system  ("clear");
    int lin=1, col=1;

    while (lin <= 30){
        col = 0;
        while (col <=30){
            printf("#");
            col++;
        }
        printf("\n");
        lin++;
    }
    return 0;
}