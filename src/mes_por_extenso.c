#include <stdio.h>
#include<stdlib.h>

int main (){
    system ("clear");
    int mes;
    printf ("Me diga o número do mês e eu te direi o mês por extenso\n");
    scanf("%d",&mes);
    
    
    switch(mes){
        case 1:
        printf ("Este é o mes de Janeiro");
        break;

        case 2:
        printf ("Este é o mês de Fevereiro");
        break;

        case 3:
        printf("Este é o mês de Março");
        break;

        case 4:
        printf("Este é o mês de Abril");
        break;

        case 5:
        printf("Este é o mês de Maio");
        break;

        case 6:
        printf("Este é o mÊs de Junho");
        break;

        case 7:
        printf("Este é o mês de Julho");
        break;

        case 8:
        printf("Este é o mês de Agosto");
        break;

        case 9:
        printf("Este é o mês de Setembro");
        break;

        case 10:
        printf("Este é o mês de Outubro");
        break;

        case 11:
        printf("Este é o mês de Novembro");
        break;

        case 12:
        printf("Este é o mês de Dezembro");
        break;

        default:
        printf("Mês inválido");
        break;
    }
printf("\n");
return 0;
}