#include <stdio.h>
#include "../lib/atividade.h"

int main(){
    int num1;
    int num2;
    printf("Digite um número\n");
    scanf("&d",&num1); 

    printf("Digite outro número\n");
    scanf("&d",&num2); 

    printf("%d\n",maior(num1,num2));
    return 0;
}