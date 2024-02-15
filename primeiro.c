/*
Este programa pede ao usuário um número qualquer e depois exibe o número na tela
*/
#include <stdio.h> //estamos importanto uma biblioteca para trabalhar com entrada e saida de dados

int main(){
    int idade; //declaração da variável idade do tipo inteiro
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d",&idade);     //para pegar o número digitado pelo usuário
                            //estamos usando o comando scanf e adicionando
                            //o valor da variável idade. Usamos o e-comercial para
                            //referenciar o endereço de memória da variavel
                            //idade
    printf("A idade digitada é %d\n" "A variável da idade %x\n",idade, &idade);
    return 0;
}