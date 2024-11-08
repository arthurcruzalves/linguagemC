#include <stdio.h>
// O comando ../ faz saída da pasta atual (src) e lib é a pasta onde esta o arquivo de cabeçalho calculos.h
#include "../lib/calculo.h"

int main(){
    int valores[] = {7,9,10,19,6,27,2,39};
    printf("O resultado da soma é %d\n",somaArray(valores, 8));
    printf("O resultado da media é %d\n",mediaArray(valores, 8));
    printf("O resultado do valor é %d\n",maiorValor(valores, 8));
    return 0;
}