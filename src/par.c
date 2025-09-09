#include <stdio.h>
// Utilizando a biblioteca stdlib que guarda os comandos de limpar a tela e pause
#include <stdlib.h>

int main(){
    // comando para limpar a tela em linux
    system("clear");
    int n;
    printf("Digite um numero inteiro e tecle enter\n");
    scanf ("%d",&n);
    // Se o valor digitado pelo usuário divifdido por dois(2) e restar zero(0) então este valor é par
    if (n % 2 == 0 ){
        printf ("O número %d que você digitou é Par\n",n);
    }

    return 0;
    


}