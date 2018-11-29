/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Thiago Sousa
 *
 * Created on 27 de Novembro de 2018, 15:20
 */

#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
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
=======
#include "sistema_academico.h"
#include <string.h>
#include <dirent.h>

/*
 *
 */

//Structs

typedef struct
{
    char nome;
    int matricula;
    float nota1, nota2, media;
} tipoAluno;

struct Materia
{
    char nomeMateria;
    tipoAluno listaDeAlunos[];

};

//headers
void novoAluno(char *nome, int matricula);
void addNota(char *nomeAluno, float nota);
void listarConteudoDaPasta(DIR *dir, char *pathDir);

int main(int argc, char** argv)
{

    char nome[] = "C:\\Users\\alunotgn\\Thiago\\GitHub\\Sistema_Academico\\Projeto\\Guilherme.txt;
    DIR *dir;
    char dirLocation = "C:\\Users\\alunotgn\\Thiago\\GitHub\\Sistema_Academico\\Projeto";
    char *dirLocationPtr = &dirLocation;


    //concatenando o nome com a extensao
    //strcat(nome, ".txt");

    char *nomePtr = &nome;

    novoAluno(nomePtr, 1451235);
    //listarConteudoDaPasta(dir, dirLocationPtr);

    return (EXIT_SUCCESS);
>>>>>>> 2ccd46da8d45cdc8844fa5e5135a59f7ceb6a6d8
}

void novoAluno(char *nome, int matricula)
{
    //Ponteiro para o arquivo
    FILE *arquivo;

    //Abrindo o arquivo
    printf(nome);
    arquivo = fopen(nome, "w");

    //fechando o fluxo do arquivo
    fclose(arquivo);

    //
};

void addNota(char *nomeAluno, float nota)
{

};

void listarConteudoDaPasta(DIR *dir, char *pathDir)
{
    struct dirent *lsdir;

    dir = opendir(*pathDir);

    /* imprime todos os arquivos e pastas dentro de um diretorio */
     while ( ( lsdir = readdir(dir) ) != NULL )
    {
        printf ("%s\n", lsdir->d_name);
    }

    closedir(dir);
}



















