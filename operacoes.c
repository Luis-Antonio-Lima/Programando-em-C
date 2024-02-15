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