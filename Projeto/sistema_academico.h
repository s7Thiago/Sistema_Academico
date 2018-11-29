
/**
*
* Criado por: Thiago Sousa
* Data: 26/11/2018 17:33
*
 * Cabecalhos das funcoes que servem para gerenciar a gravacao das informacoes
 * do sistema academico na memoria fisica
*/

 /*
 Quando acionada, cria um novo arquivo na mesma pasta do projeto identificado
 pela matrícula referente ao aluno
 */
 void novoAluno(char *nome, int matricula);

 /*
 Caso o aluno seja criado sem adicionar notas, esta funcao pode ser utilizada
 para definir notas para um aluno especifico
 */
 void adicionarNota(int matricula, int nota);
