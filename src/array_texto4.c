#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");
    char nome_completo [100];
    printf("Digite seu nome\n");
    fgets (nome_completo,100,stdin);
    printf("Olá, %s\n", nome_completo);
    return 0;

}