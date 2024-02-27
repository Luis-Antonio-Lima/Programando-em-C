# Estudo da Linguagem C
## Neste repositório será e publicando arquivos escritos em C
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

#### Arquivo while_dec_bin.c

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

#### Arquivo while_bin_dec.c

```c
#include <stdio.h>
#include <math.h>

int main() {
    int binario[6] = {1,0,1,1,1,0};

    int rs = 0;
    int pos = 0;
    int exp = 5;
    while (pos <= 5){
        rs += binario[pos] * ( pow(2, exp));
        pos++;
        exp--;
    }
    printf("%d\n", rs);
    return 0;
}
```

#### Arquivo for1.c

```c
#include <stdio.h>

int main (){
    int x;
    for(x = 1; x <= 10; x++){
        printf("%d\n", x);
    }
    return 0;
}
```

#### Arquivo tabuada.c

```c
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
```

#### Arquivo expoente.c

```c
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
```

#### Coleções; colecao1.c

```c
// Array é u conjunto de dados sobre um determinado
// assunto. Podemos falar de valores numéricos, textos,
// datas, ou objetos
#include <stdio.h>

int main(){
    int valores[5] = {10,5,8,12,7};
    printf("%d\n", valores[2]);
    return 0;
}
```

#### Coleções; colecao2.c

```c
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
```

#### Coleções; colecoes_iguais.c

```c
#include <stdio.h>

int main() {
    int c1[10] = {10,5,68,8,47,12,54,13,62,11};

    int c2[15] = {11,5,62,112,84,76,12,55,59,85,13,0,14,19,18};

    int i, w;

    for(i = 0; i <= 9; i++){
        for (w = 0; w <= 14; w++) {
            if (c1[i] == c2[w]) {
            printf("%d\n", c1[i]);
            }
        }
    }
    return 0;
}
```

#### Primeiro arquivo em h: principal.h

```c
#include <stdio.h>

int quadrado (int x, int y){
    return x * y;
}
```

#### Arquivo principal.c

```c
#include <stdio.h>
#include "primeiro.h"

int main(){
    int rs = quadrado(5,7);
    printf ("A área do quadrado de 5 e 7 é %d\n", rs);
    return 0;
}
```

#### Arquivo arr_s_ptr1.c

```c
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
```

#### Arquivo arr_c_ptr1.c

```c
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
```

#### Arquivo pass_por_valor.c

```c
#include <stdio.h>

int subtrair(int x, int y) {
    printf("Posição x é %p e y é %p\n", &x,&y);
    return x - y;
}

int main() {
    int v1 = 10;
    int v2 = 5;
     printf("Posição v1 é %p e v2 é %p\n", &v1,&v2);
    int rs = subtrair(v1,v2);
    printf("O resultado é %d\n", rs);
    return 0;
}
```

#### Arquivo pass_por_ref.c

```c
#include <stdio.h>

int subtrair(int *x, int *y) {
    printf("Posição x %p e Posição y %p\n",x,y);
    return *x - *y;
}

int main() {

    int v1 = 10;
    int v2 = 5;
    printf("Posição de v1 %p e Posição de v2 %p\n",&v1,&v2);
    int rs = subtrair(&v1, &v2);
    printf("O resultado é %d\n", rs);
    return 0;

}
```

#### Arquivo malloc1.c

```c
#include <stdio.h>
#include <stdlib.h>

int main () {
    int *ptr_int;
    ptr_int = (int *)malloc(sizeof(int));

    printf("Endereço reservado %p\n", ptr_int);

    if(ptr_int == NULL){
        printf("Erro ao tentar alocar memória\n");
        return 1; //Para a execução do programa
    }

    printf("Digite um número: \n");
    scanf("%d", ptr_int);

    printf("O valor digitado é %d e ele está em %p\n", *ptr_int,ptr_int);
    free(ptr_int);
    return 0;
}
```

#### Arquivo malloc2.c

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int tamanho = 5;

    array = (int *)malloc(tamanho * sizeof(int));

    if(array == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    for(int i = 0; i < tamanho; i++){
        array[i] = i + 1;
    }

    printf("Exibindo os dados do array\n");
    for(int j = 0; j < tamanho; j++){
        printf("%d - ", array[j]);
    }
    
    free(array);
    return 0;
}
```

#### Arquivo malloc3.c

```c
#include <stdio.h>

int main() {
    FILE *arquivo;
    char texto[100];

    //Abre o arquivo para escrita
    arquivo = fopen("exemplo.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo. \n");
        return 1;
    }

    //Esreve no arquivo
    fprintf(arquivo, "Olá, este arquivo é um exemplo de manipulação de arquivos em C.");

    //Fecha o arquivo
    fclose(arquivo);

    //Abre o arquivo para leitura
    arquivo = fopen("exemplo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    //Lê o conteúdo do arquivo e imprimena tela
    fgets(texto, 100, arquivo);
    printf("Conteúdo do arquivo: %s\n", texto);

    //Fecha o arquivo
    fclose(arquivo);

    return 0;
}
```