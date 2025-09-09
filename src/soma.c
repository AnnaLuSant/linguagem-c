// Este programa pede ao usuário dois numeros e 
// Realiza a soma entre eles e ao final exibe o
// resultado

#include <stdio.h>
int main (){
    //declarar as variaveia que irão receber
    //os numeros digitados pelo usuário
    int numero1;
    int numero2;
    int resultado;

    // Vamos pedir ao usuário para entrar com o primeiro valor
    printf("Digite um número: \n");
    // capturando o número digitado com
    // o comando scanf
    scanf("%d",&numero1);

    printf ("Digite outro número inteiro e tecle enter:\n");
    scanf("%d",&numero2);

    // Vamos realizar a some entre so dois resultados 1 e 2
    resultado = numero1 + numero2;

    // Apresentar o resultado em tela

    printf("A soma do número %d com o número %d é %d \n", numero1, numero2, resultado);

    return 0;
}
