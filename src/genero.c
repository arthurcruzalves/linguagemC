#include <stdio.h>
#include "../lib/atividade.h"

int main(){

char letra;
printf("Digite M para Masculino ou F para Feminino e tecle Enter\n");
scanf("%c",&letra);
genero(letra);

return 0;
}