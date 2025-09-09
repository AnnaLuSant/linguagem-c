#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");
    int v;
    printf ("Digite um número e tecle enter: \n");
    scanf("%d" ,&v);

    if(v > 0){
        printf("O valor digitado é positivo\n");
    }
    else if(v < 0 ){
        printf("Ovalor digitado é negativo\n");
    
    }
    else{
        printf("O valor digitado é zero(0)\n");
    
    }
    return 0;

}