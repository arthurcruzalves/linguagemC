#include <stdio.h>
int main(){
    int n;
    printf("Digite um número e tecle Enter\n"),
    scanf("%d",&n);
    if (n % 2 == 0){
        printf("O valor %d é Par\n",n);
    }
else{
    printf("Onúmero %d é Impar\n");
}
return 0;
}