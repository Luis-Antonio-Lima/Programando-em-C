# Estudo da Linguagem C
## Neste repositório será e publicando arquvos escritos em C
<img src="./img/c.png" height="150" width="150">

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

#### notaMedia.c

```c
#include<stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float soma;
    float media;
    printf("Digite a primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f",&nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f",&nota3);
    printf("Digite a quarta nota:\n");
    scanf("%f",&nota4);

    soma=nota1+nota2+nota3+nota4;
        media=soma/4;
        printf("A media do aluno é %2.2f\n",media);
    return 0;
}
```

#### desvio de fluxo: parimpar.c

```c
#include<stdio.h>

int main() {
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);

    if(num % 2 == 0){ //caso a divisão do número dê 0 ele será par
        printf("Este número é par\n");
    }
    else {
        printf("Este número é impar\n");
    }
    return 0;
}
```

#### Desvio de fluxo: media_aluno.c

```c
/*
Neste programa iremos calcular a nota média do aluno. Teremos a entrda de 4 notas, depois será feito o cálculo da média, onde iremos somar as notas e depois dividir por 4.
Se o aluno tiver uma média acimna ou igual a 7, então estará aprovado; caso o aluno de tenha uma nota menor ou igual a 4, então o aluno estará reprovado; caso contrário, estará em recuperação
*/

#include<stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float soma;
    float media;
    printf("Digite a primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f",&nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f",&nota3);
    printf("Digite a quarta nota:\n");
    scanf("%f",&nota4);

    soma=nota1+nota2+nota3+nota4;
        media=soma/4;
        printf("A media do aluno é %2.2f\n",media);
        if(media >= 7){
            printf("Aprovado!\n");
        } else if (media <= 4){
            printf("Reprovado\n");
        } else {
            printf("Recuperação\n"); }
    return 0;
}
```

#### Desvio de fluxo: bissexto.c

```c
#include <stdio.h>
int main (){
    int ano;
    printf("Digite o ano:");
    scanf("%d",&ano);

    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))) {
        printf("%d é um ano bissexto\n", ano);
    } else {
        printf("%d não é um ano bissexto\n", ano);
    }
    return 0;
}
```

#### Arquivo while1.c

```c
#include <stdio.h>

int main(){
    int i = 0;
    while(i <= 10){
        printf("%d\n",i);
        i++;
    }
return 0;
}
```

#### Arquivo while_bissexto.c

```c
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
```

#### Arquivo while_dec_bin

```c
#include <stdio.h>

int main(){

    int dec = 24;
    int resto = 0;
    int pos = 1;
    int rs = 0;

    while(dec > 0){
        resto = dec % 2;
        dec = dec/2;
        rs = rs + pos * resto;
        pos = pos * 10;
    }
    printf("%d\n",rs);
    return 0;
}
```