#include <stdio.h>
#include <stdlib.h>

int main (){
    system ("clear");
    FILE *pagina;
    pagina = fopen("files/index.html","a");
    fprintf(pagina,"<html><boby><h1>Primeira página html em C</h1></bory></html>");
    printf("Pagina criada...\n");
    fclose(pagina);
    system("firefox flies/index.htmlyy");
    return 0;
}