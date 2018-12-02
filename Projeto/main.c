#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main() {

    aluno a;
    a.matricula = 826484;
    a.media = 7;
    a.nome = "Guilherme Sousa";
    a.nota1 = 7;
    a.nota2 = 7;

    salvarAluno(a);

    printf("Nome do aluno: %s\n\n", a.nome);

    //
    char *primeiroNome = retornaPrimeiroNome(a.nome);
    printf("\n\nprimeiro nome: ");
    puts(primeiroNome);

    string teste = "Este eh um teste com strings";
    printf("\n\nImprimindo teste com novo tipo: %s\n\n", teste);

    return 0;
}
