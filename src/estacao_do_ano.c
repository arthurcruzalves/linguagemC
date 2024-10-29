#include <stdio.h>

int main(){
    int estacoes;
    printf("digite o mês da estação e tecle Enter\n");
    scanf("%d",&estacoes);

    if (estacoes == 1 || estacoes == 2 || estacoes == 3){
        printf("Nesse mês estamos no verão\n");
    }
    else if (estacoes == 4 || estacoes == 5 || estacoes == 6){
        printf("Nesse mês estamos no outono\n");
    }
     else if (estacoes == 7 || estacoes == 8 || estacoes == 9){
        printf("Nesse mês estamos no inverno\n");
    }
     else if (estacoes == 10 || estacoes == 11 || estacoes == 12){
        printf("Nesse mês estamos no verão\n");
    }

     else{
        printf("Numero inválido!");
    }
    printf("\n");
    return 0;
    
}