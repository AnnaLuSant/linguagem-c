#include <stdio.h>
#include <stdlib.h>


int main(){
    system ("clear");
    FILE *arquivo;
    arquivo = fopen("texto.txt","a");
    fprintf(arquivo, "Texto qualquer");
    fclose(arquivo);
    return 0;

}