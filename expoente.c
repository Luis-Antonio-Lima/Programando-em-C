#include <stdio.h>

int main() {
    float base, exp;
    float res = 1.0;
    printf ("Digite um número decimal:\n");
    scanf("%f",&base);
    printf ("Digite um expoente:\n");
    scanf("%f",&exp);

    for (int i = 0; i < exp; i++){
        res *= base; //res = res * base
    }
    printf ("O resultado de %2.2f elevado a %2.2f é %2.2f\n", base,exp,res);

    return 0;
}