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