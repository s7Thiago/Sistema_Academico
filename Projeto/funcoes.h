/**
*Structs
**/

//Representacao geral das propriedades de cada aluno

//Definindo tipo string
typedef char *string;

typedef struct {
    string nome;
    int matricula;
    float nota1, nota2, media;
} aluno;

//Representacao geral de uma disciplina
typedef struct {
    string nome;
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
