#include <stdio.h>

int main() {
    int valores[5] = {38,2,3,4,5};
    int *ptr_valores = valores;

   // printf("%d\n", *ptr_valores);
   // printf("%p\n", ptr_valores);

   // ptr_valores++;

   // printf("%d\n", *ptr_valores);
   // printf("%p\n", ptr_valores);

    int i;
    for( i = 1; i <= 5; i++){
        printf("O valor é %d e a posição de memória é %p\n", *ptr_valores,ptr_valores);
        ptr_valores++;
    }
    
    return 0;
}