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