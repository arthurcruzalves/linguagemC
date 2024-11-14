#include <stdio.h>

void cadastro(char *nome, char *email, int *idade){
    FILE *arquivo;
    arquivo = fopen("files/cad_cli.txt","a");
    fprintf(arquivo,"Nome: %s\n",nome);
    fprintf(arquivo,"E-Mail: %s\n",email);
    fprintf(arquivo,"Idade: %d\n",*idade);
    fprintf(arquivo,"--------------------------");
    fclose(arquivo);
}
int main(){
    char nome[30];
    char email[50];
    int idade;

    printf("Digite o seu nome e tecle Enter:\n");
    scanf("%[^\n]s",nome);
    printf("Digite o seu email e tecle Enter:\n");
    scanf("%s",email);
    printf("Digite o sua idade e tecle Enter:\n");
    scanf("%d",&idade);
    cadastro(nome,email,&idade);
    printf("Cadastrado com sucesso!\n ");

    return 0;
}