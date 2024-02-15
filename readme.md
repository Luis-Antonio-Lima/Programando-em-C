# Estudo da Linguagem C
## Neste repositório será e publicando arquvos escritos em C
<img src="https://lh3.googleusercontent.com/proxy/FbO7zfRSdURCyVNZ09T2i2_BzFXoD5MPjEyJnb7EwlkAY_sxXq5Aa2GCRbZPNeADLxWjDxv1lwRSkVuld_kZXf1UVS0FQeCCdXBiG_eO9hm_2wjzmP0Q1Ca80V3Z" height="150" width="150">

### Abaixo é representado os arquivos deste repositório

#### hello.c

```c
#include <stdio.h>
int main(){
    printf("Hello, World\n");
    return 0;
}
```

#### primeiro.c

```c
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
```

#### operacoes.c

```c
#include<stdio.h>
int main (){
    int n1; //Numero 1
    int n2; //Numero 2
    int soma; //Operação
    int subtrair;
    int multiplicar;
    int dividir;
    printf ("Digite um numero e tecle enter:\n");
    scanf ("%d",&n1); //permite acessar seção de memória de variavel n1
    printf ("Digite outro numero e tecle enter:\n");
    scanf("%d",&n2); //permite acessar seção de memória de variavel n2
    soma=n1+n2;
    subtrair=n1-n2;
    multiplicar=n1*n2;
    dividir=n1/n2;
    printf("O resultado da soma é %d\n" ,soma);
    printf("O resultado da soma é %d\n" ,subtrair);
    printf("O resultado da soma é %d\n" ,multiplicar);
    printf("O resultado da soma é %d\n" ,dividir);
    return 0;
}
```

#### desconto_produto.c

```c
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
```