#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    int matricula;
    float *vNotas;
    char nome[100];
} Aluno;

typedef struct Matéria {
    Aluno** V;
    float media[5];
    int nAlunos;
} Materia;

Aluno* fillAluno() {
    Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
    printf("Entre o # de matricula: ");
    scanf(" %d", &(novo->matricula));
    printf("Entre o nome do aluno: ");
    scanf(" %80[^\n]", novo->nome);
    for(int i = 0; i < 5; i++) {
        printf("Entre a nota de numero %d: ", (i+1));
        scanf(" %f", (novo->vNotas + i));
    }
    
    return novo;
}

Materia* fillMateria(int numAlunos) {
    Materia* nova = (Materia*)malloc(sizeof(Materia));
    nova->nAlunos = numAlunos;
    nova->V = (Aluno**)Malloc(sizeof(Aluno*)*numAlunos);
    for(int i = 0; i < numAlunos; i++) {
        *(nova->V+i) = fillAluno();
    }

    return nova;
}

void imprimeAluno(Aluno* alu) {
    printf("nome: %s, matricula: %d\n", alu->nome, alu->matricula);
}

void mostraMateria(Materia* m1) {
    for(int i = 0; i < m1->nAlunos; i++) {
        imprimeAluno(*(m1->V+i));
    }
}