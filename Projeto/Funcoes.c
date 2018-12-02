#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

#define savesPath "saves\\"

//Pasta padrao
char defaultPath[] = savesPath;


void salvarAluno(aluno a){
    printf("\n\nSalvar aluno foi acionada\n\n");

    //concatenando o caminho para salvar o arquivo
    //strcat(a.nome, ".txt");

    FILE *arquivo = fopen("arquivo", "a");
    //fputs(retornaPrimeiroNome(a.nome), arquivo);
    fclose(arquivo);
}

char * retornaPrimeiroNome(string nome) {
    //conta quantas letras tem o primeiro nome
    fflush(stdin);
    string retorno;
    int letrasPos = 0;
    retorno = malloc(letrasPos * sizeof(char));

    //Copia o primeiro a parte correspondento ao primeiro nome para o vetor retorno:
    while(nome[letrasPos] != ' ') {
        printf("copiando '%c'\n", nome[letrasPos]);
        retorno[letrasPos] = nome[letrasPos];

        letrasPos++;
    }

    //printf("\nTamanho do primeiro nome: %d\n", letrasPos);
    printf("\nTamanho do vetRetorno: %d\n\n", (letrasPos*sizeof(char)));
    printf("Primeiro nome antes de retornar: %s", retorno);

    return retorno;
    free(retorno);
}

