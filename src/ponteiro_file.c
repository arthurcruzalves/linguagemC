#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("files/texto.txt","a");
    // w -> Write (escrever)
    // r -> Read (ler)
    // a -> Append (adicionar)
    fprintf(arquivo,"QUARTA É GUERRA");
    fclose(arquivo);
    printf("Criamos o arquivo\n");
    return 0;
}