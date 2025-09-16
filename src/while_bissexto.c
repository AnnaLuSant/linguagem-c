#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");
    int i, f;

    printf("Digite um ano inicial\n");
    scanf("%d",&i);

    printf("Digite o ano final\n");
    scanf ("%d",&f);
    
    while (i <= f){
        if(i % 4 == 0)
        printf("O ano que você digitou %d é bissexto\n",i);
        i++;
    }

    return 0; 
}