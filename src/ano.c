#include <stdio.h>
int main(){
    int ano;
    printf("Digite o ano e tecle Enter\n");
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0 )) {
        printf("O ano %d é ano bissexto\n",ano);
    } else {
    printf("O ano %d não é ano bissexto.\n", ano);
}
    return 0;
}