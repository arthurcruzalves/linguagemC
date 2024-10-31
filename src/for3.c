#include <stdio.h>
int main(){
     int num;
     int total = 0;
    for (num = 1930 ; num <= 2024 ; num++){
        if (num % 4 == 0){
         printf("%d\n",num);
         total++;
        }
    }
    printf("Entre 1930 e 2024 existem %d anos bissexto\n",total);
    return 0;
}