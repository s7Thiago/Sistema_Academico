#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

#define savesPath "saves\\"

//Pasta padrao
char defaultPath[] = savesPath;

//Definindo tipo string
typedef char string;

void salvarAluno(aluno a){
    printf("\n\nSalvar aluno foi acionada\n\n");

    //concatenando o caminho para salvar o arquivo
    strcat(a.nome, ".txt");

    FILE *arquivo = fopen("arquivo", "a");
    fputs(retornaPrimeiroNome(a.nome), arquivo);
    fclose(arquivo);
}

char * retornaPrimeiroNome(char *nome) {

    fflush(stdin);
    //conta quantas letras tem o primeiro nome
    int letrasPos = 0;
    while(nome[letrasPos] != ' ') {
        letrasPos++;
    }

    //printf("\nTamanho do primeiro nome: %d\n", letrasPos);

    //alocando memoria necessaria para o nome recebido
    char *retorno = malloc(letrasPos * sizeof(char));

    printf("\nTamanho do vetRetorno: %d\n\n", (letrasPos*sizeof(char)));

    //Copia o primeiro a parte correspondento ao primeiro nome para o vetor retorno:
    for(int i = 0; i < letrasPos; i++) {
        printf("copiando '%c'\n", nome[i]);
        retorno[i] = nome[i];
    }

    printf("Primeiro nome antes de retornar: %s", retorno);

    return retorno;
    free(retorno);
}

