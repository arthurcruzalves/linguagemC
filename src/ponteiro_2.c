#include <stdio.h>

void dados(int *x, int *y){
    int soma = *x + *y;
    printf("x esta em %p e y esta em %p\n",&x,&y);
    printf("O resultado é %d\n",soma);
}
int main(){
    int a = 10;
    int b = 5;
    dados(&a , &b);
    printf("a esta em %p e b esta em %p\n",&a,&b);
    return 0;
}