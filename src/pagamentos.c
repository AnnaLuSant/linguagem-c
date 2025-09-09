#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    float preco, resultado;
    char forma_pg;

    printf("Digite o Valor a ser pago e tecle enter\n");
    scanf("%f",&preco);

    // Limpa o buffer do teclado antes de ler o próximo caracter. Para a execução anterior e segue para a proxima etapa
    getchar();
    // importante para evitar que o '\n' da leitura seja capturado 
    printf("Digite a forma de pagamento sendo:\nc->crédito\nd->Débito\nD->Dinheiro\np->Pix\n");
    scanf("%c",&forma_pg);

    if(forma_pg == 'c'){
        resultado = preco * (0.05 + 1);
        printf("O valor a ser pago no cédito é %.2f\n ,resultado");
    }
    else if(forma_pg =='d'){
        printf("O valor a ser pago no débito é %.2f\n",preco);
    }
    else if (forma_pg == 'D'){
        resultado = preco * 0.98;
        printf("O valor a ser pago no dinheiro é %.2f\n",resultado);
    }
    else if(forma_pg == 'p'){
         resultado = preco * 0.96;
        printf("O valor a ser pago no pix é %.2f\n",resultado);
    }
    else{
        printf("Esta forma de pagamento NÃO EXISTE!\n");
    }
    return 0;
}