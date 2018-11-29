/**
*Structs
**/

//Representacao geral das propriedades de cada aluno
typedef struct {
    char *nome;
    int matricula;
    float nota1, nota2, media;
} aluno;

//Representacao geral de uma disciplina
typedef struct {
    char nome[60];
    aluno listaDeMatriculados[];

} disciplina;

/**
*Structs
**/
//===================================================================================
//Headers

/**
*Salva um aluno em um arquivo. o arquivo vai com o nome do aluno
**/
void salvarAluno(aluno a);

/**
*Separa o primeiro nome do sobrenome e o retorna
**/
char * retornaPrimeiroNome(char *nome);
//===================================================================================
