/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   sistema_academico.h
 * Author: Thaigo Sousa
 *
 * Created on 27 de Novembro de 2018, 15:34
 */

#ifndef SISTEMA_ACADEMICO_H
#define SISTEMA_ACADEMICO_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 Cria um arquivo com o nome do aluno. para que funcione corretamente, eh necessario incluir a extensao '.txt'
 apos o nome do aluno
 */
    void novoAluno(char *nome, int matricula);

#ifdef __cplusplus
}
#endif

#endif /* SISTEMA_ACADEMICO_H */

