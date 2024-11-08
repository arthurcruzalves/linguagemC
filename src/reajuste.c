#include <stdio.h>
#include "../lib/atividade.h"

int main(){
    float sal;
    printf("Digite o salário do funcionario\n");
    scanf("%f",&sal);
    reajuste(sal);

    return 0;
}