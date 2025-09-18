#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char nome [10];
    char somebrenome[10];
    printf("Digite seu nome\n");
    scanf("%s %s", nome, somebrenome);

    printf("Olá %s %s\n", nome, somebrenome);

    return 0;
}
