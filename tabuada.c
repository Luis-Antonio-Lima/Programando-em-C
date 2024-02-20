#include <stdio.h>

int main() {
    int num, num2;
    printf ("Digite um número para a tabuada:\n");
    scanf("%d",&num);
    for (num2 = 1; num2 <= 10; num2++){
        printf ("%d x %d = %d\n",num,num2,(num*num2));
    }
    return 0;
}