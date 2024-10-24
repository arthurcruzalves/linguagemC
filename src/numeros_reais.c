#include <stdio.h>

int main(){
    //O tipo float é para trabalhar com casas decimais
    float n1, n2, soma, divisão;
    printf("Digite um numero e tecle Enter:\n");
    scanf("%f",n1);
    printf("Digite outro numero e tecle Enter:\n");
    scanf("%f",n2);

    soma = n1+ n2;
    divisão = n1 / n2;

    printf("O resultado da soma é %f\n", soma);
    printf("O resultado da divisão é %f\n", divisão);
    return 0;
}