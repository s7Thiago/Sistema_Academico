#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

//Pasta padrao
char defaultPath[] = "saves\\";

//Definindo tipo string
typedef char string;

void salvarAluno(aluno a){
    printf("\n\nSalvar aluno foi acionada\n\n");

    //concatenando o caminho para salvar o arquivo

    FILE *arquivo = fopen(a.matricula, "a");
}

