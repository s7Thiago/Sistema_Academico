#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "minhas_funcoes.h"

/**Pode-se considerar uma string um vetor de bytes. Nessa caso, cada byte de uma string eh tratado como um char, ou
    seja, podemos adotar o byte como sinonimo de char:
    **/
    typedef char byte;

//--------------------------------------Headers--------------------------------------
/*Serve para criar um arquivo na memoria. Recebe dois parametros:
O caminho do arquivo seguido do nome, e o tipo de operacao.
caso seja passado somente o nome do futuro arquivo, o resultado final
sera guardado na mesma pasta em que se encontra o codigo do programa
*/
void novoArquivo(byte nomeArquivo, byte permissao);
//--------------------------------------Headers--------------------------------------

    //Assim criariamos um novo tipo de dados baseado no da linha anterior
    //typedef byte *string;

    /*uma sgtring eh localizada inteiramente atravres do seu primeiro elemento, pois este geralmente corresponde ao ponto
    de partida da string*/

int main() {

    //Como esses detalhes em mente, vamos contruir uma string byte-a-byte:

    //Ira apontar para o primeiro elemento da string, possibilitando assim que o restante do conteudo dela seja localizado
    byte *str;

    /*Fariamos assim para alocar memoria para a string (Que no fundo se trata de um vetor de caracteres):*/
    str = malloc(10 * sizeof(byte));

    str[0] = 65;
    str[1] = 66;
    str[2] = 67;
    str[3] = 0;
    str[4] = 68;

    //Imprimindo os elementos no vetor str:
    for(int i = 0; i < 5; i++) {
        printf("str[%i]: %c\n", (i + 1), str[i]);
    }

    //Imprimindo uma cadeia de caracteres: ação
    byte cadeiaCaracteres[100] = {97, 195, 167, 195, 163, 111, 0};
    printf("\n\ncadeia de caracteres: %s\n", cadeiaCaracteres);

    //Agora vamos gravar uma cadeia de caracteres em um arquivo:
    FILE *arquivo = fopen("meuArquivo.txt", "w");

    //Gravando uma cadeia de caracteres no arquivo:
    fputs(str, arquivo);
    fclose(arquivo);
    //Feito

    //Lendo caracteres digitados no taclado e armazenando numa string:
    byte entradaTeclado[100];
    printf("Escreva algo para ser armazenado: ");
    scanf("%s", &entradaTeclado);

    //Vamos armazenar o conteudo em um novo arquivo:
    FILE *arquivoEntradaTeclado = fopen("entradaTeclado.txt", "w");

    //Gravando os caracteres que foram digitados e armazenados no arquivo
    fputs(entradaTeclado, arquivoEntradaTeclado);

    //Fechando o cluxo para liberar o arquivo:
    fclose(arquivoEntradaTeclado);

    //Testando a funcao que foi feita para criar arquivos na memoria:
    novoArquivo("novoTesteDeFuncaoPropria.txt", "w");

    return 0;
}

void novoArquivo(byte nomeArquivo, byte permissao) {
    FILE *arquivo = fopen(nomeArquivo, permissao);
    fclose(arquivo);
}
