#include <stdio.h>

int main() {
    int valores[5] = {1,2,3,4,5};
    printf("Exibindo o primeiro valor: %d\n", valores[0]);
    printf("Exibindo o segundo valor: %d\n", valores[1]);
    int i;
    for ( i = 0; i <=4; i++ ){
        printf("Exibindo: %d\n", valores[i]);
    }
    return 0;
}