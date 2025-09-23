#include <stdio.h>
#include <stdlib.h>

int main (){
    system ("clear");
    FILE *novo;
    novo = fopen("files/cadastro.txt","a");
    fprintf(novo, "Eaiii... será que você voltaaaa??? Tudo  a minha voltaaa é tristeee");
    printf("Arquivo criado!\n");
    fclose(novo);
    return 0;
}