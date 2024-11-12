#include <stdio.h>

int main(){
    //declaração da variavel idade
    int idade = 18;
    //declaração de variável idade
    int *pidade = &idade;
    printf("A idade é %d e esta em %p e %p com o valor %d\n",idade, &idade,pidade,*pidade);

    return 0;
}