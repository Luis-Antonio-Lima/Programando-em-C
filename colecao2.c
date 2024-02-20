#include <stdio.h>

int main() {
    int loud[10] = {1,21,11,8,19,45,7,24,26,18};
    int soma = 0, media = 0, i;
    for(i = 0; i <= 9; i++){
        soma += loud[i];
    }
    printf("O resultado da soma é %d\n", soma);
    for(i = 0; i <= 9; i++){
        media += loud[i];
    }
    printf("O resultado da média é %d\n", (media/10));
    for(i = 0; i <= 9; i++){
        if (loud[i] % 2 == 0){
            printf("%d\n", loud[i]);
        }
    }
    return 0;
}