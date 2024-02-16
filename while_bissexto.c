#include <stdio.h>

int main (){
    int ano = 1952;
    int qtd = 0;

    while(ano <= 2024) {
        if (ano % 4 == 0){
            printf("%d é um ano bissexto\n", ano);
            qtd++;
        } else {
            printf("%d não é um ano bissexto\n", ano);
        }
        ano++;
    }
    printf("Temos %d anos bissextos\n",qtd);
    return 0;
}