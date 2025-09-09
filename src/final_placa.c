#include <stdio.h>
#include <stdlib.h>

int main (){
    int placa;
    // vamos limpar a tela do terminal
    system ("clear");
    printf("Digite o número final da placa do veiculo:\n");
    scanf("%d",&placa);

    if(placa == 1 || placa == 2){
        printf("Rodizio na segunda-feira não pode rodar\n");

    }
    else if(placa == 3 || placa == 4){
        printf("Rodizio na terça-feira. Não pode circular\n");
    }
    else if(placa == 5 || placa == 6){
        printf("Rodizio na quarta-feira. Não pode circular\n");
    }
    else if(placa == 7 || placa == 8){
        printf("Rodizio na quarta-feira. Não pode circula\n");
    }
    else{
        printf("Final de placa inválido!\n");
    }
    return 0;
}

