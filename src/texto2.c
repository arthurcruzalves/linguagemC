#include <stdio.h>

int main(){
    
    char nome[20];
    printf("Digite seu nome e tecle Enter\n");
    //Foi necessario utilizar o colchetes para que o comando "scanf" receba toda a cadeia da caracteres. 
    //O elemento circunflexo "^", foi usado para indicar onde começa o primeiro caracter.
    //O comando \n nesse caso esta sendo usado para ler o espaço
    scanf("%[^\n]s",&nome);
    printf("Olá, %s. Seja bem vindo\n",nome);

    return 0;
}