#include <stdio.h>

int main(){
    float salario_bruto, desconto_vale_transporte, desconto_inss, desconto_fgts;
    float total_descontos, salario_liquido;

    // Salário bruto
    printf("Digite o salário bruto do funcionário: ");
    scanf("%f", &salario_bruto);

    // Calcular descontos
    desconto_vale_transporte = salario_bruto * 0.06;
    desconto_inss = salario_bruto * 0.07;
    desconto_fgts = salario_bruto * 0.08;

    // Calcular o total de descontos
    total_descontos = desconto_vale_transporte + desconto_inss + desconto_fgts;

    // Calcular o salário líquido
    salario_liquido = salario_bruto - total_descontos;

    // Exibe o resultado
    printf("Total de descontos: %f\n", total_descontos);
    printf("Salário líquido: %f\n", salario_liquido);
    return 0;
} 