#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sistema_academico.h"

int main() {

    FILE *arquivo = fopen("meuArquivo.txt", "w");

    char nome[] = "";
    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    printf("nome recebido: %s", nome);

    fprintf(nome, "%s", arquivo);
    fclose(arquivo);

    return 0;
}
