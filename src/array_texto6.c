#include <stdio.h>
#include <stdlib.h>

int main (){
    system("clear");
    char nome_completo[100];
    float notas1;
    float notas2;
    float notas3;
    float notas4;
    float r;
    float média;
    printf("Digite seu nome\n");
    fgets(nome_completo,100,stdin);

    printf("Digite sua nota d0 trabalho de Português\n");
    scanf("%f", &notas1);
;
    printf("Digite sua nota do seminário de Português\n");
    scanf("%f", &notas2);

    printf("Digite sua nota da prova de Português\n");
    scanf("%f", &notas3);

    printf("Digite sua nota da atividade de Português\n");
    scanf("%f", &notas4);

     r = notas1 + notas2 + notas3 + notas4;
     média = r / 4;

     if( média  >= 7){
        printf("%s você foi aprovado, sua nota é %.2f \n",nome_completo, média);
     }

     else if( média  <= 4){
        printf("%s, você foi reprovado, sua nota é %.2f \n",nome_completo, média);
     }

    else{
        printf(" %s você está de recuperacão, sua nota é %.2f\n",nome_completo, média);
    }
    return 0;


}