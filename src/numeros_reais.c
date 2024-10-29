#include <stdio.h>

int main(){
    //O tipo float é para trabalhar com casas decimais
    float n1, n2, soma, divisão;
    printf("Digite um número e tecle Enter:\n");
    scanf("%f",n1);
    printf("Digite outro número e tecle Enter:\n");
    scanf("%f",n2);

    soma = n1 + n2;
    divisão = n1 / n2;

    printf("O resultado da soma é %.2f\n", soma);
    printf("O resultado da divisão é %.2f\n", divisão);
    return 0;
}