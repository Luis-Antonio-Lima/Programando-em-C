#include<stdio.h>

int main() {
    float preco;
    float percentual;
    float resultado;
    float ver_desconto;
    printf("Digite o preço do produto:\n");
    scanf("%f",&preco); // %f porque está trabalhando com float
    printf("Digite o desconto do produto:\n");
    scanf("%f",&percentual);
    
    resultado=preco-(preco*(percentual/100));
        ver_desconto=preco-resultado;
        printf("O preço do valor do produto com desconto de %2.2f é %2.2f\n",ver_desconto,resultado);
        return 0;
}