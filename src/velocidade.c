#include <stdio.h>

int main(){
    float km_inicial, km_final, tempo_inicial, tempo_fina;
    float distancia, tempo, velocidade_media;

    // Solicita ao usuário os dados de entrada
    printf("Digite a quilometragem inicial (km):\n");
    scanf("%f", &km_inicial);

    printf("Digite a quilometragem final (km):\n");
    scanf("%f", &km_final);

    printf("Digite o tempo inicial (em horas):\n");
    scanf("%f", &tempo_inicial);

    printf("Digite o tempo final (em horas):\n");
    scanf("%f", &tempo_fina);

    // Calcula a média
    distancia = km_final - km_inicial;
    tempo = tempo_fina - tempo_inicial;
    velocidade_media = distancia / tempo;

    printf("A velocidade média é: %.2f\n", velocidade_media);
    return 0;


}