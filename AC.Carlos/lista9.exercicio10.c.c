#include <stdio.h>

struct aluno
{
    int mat;
    char nome[81];
    int media;
};
#define MAX 10

typedef struct aluno ALUNO;

void swap(ALUNO* vet, int a, int b) {
    ALUNO temp = vet[a];
    vet[a] = vet[b];
    vet[b] = temp;
}

ALUNO* bubblesort(ALUNO * vet) {
    int len = MAX;
    int swaped;
    do {
        swaped = 0;
        for(int i = 1; i < len; i++) {
            if (vet[i-1].media > vet[i].media) {
                swap(vet, i, i-1);
                swaped = 1;
            }
        }
    } while (swaped != 0);

    return vet;
}

void le(ALUNO* turma) {
    for(int i =0; i< MAX; i++) {
        printf("Entre o número de mátricula ");
        scanf(" %d", &turma[i].mat);
        printf("Entre o nome do aluno ");
        scanf(" %s", turma[i].nome);
        printf("Entre a media do aluno ");
        scanf(" %d", &turma[i].media);

    }
}

void imprime(ALUNO* turma) {
    for(int i =0; i< MAX; i++) {
        printf("nome: %s, matricula: %d, média: %d\n", turma[i].nome, turma[i].mat, turma[i].media);
    }
}

void ordena_medias(ALUNO *turma) {
    turma = bubblesort(turma);
}