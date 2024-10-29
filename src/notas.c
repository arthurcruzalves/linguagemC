#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media;

    // Solicita ao usuário as quatro notas
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota2);

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota3);

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota4);

    // Calcula a média
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("A média das notas é: %.2f\n", media);
    return 0;


}