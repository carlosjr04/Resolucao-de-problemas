#include <stdio.h>
#include <string.h>

/*Estruturas do enunciados*/
struct aluno {
    int mat; /* Matricula do aluno */
    char nome[81]; /* Nome do aluno */
};
typedef struct aluno Aluno;

struct prova {
    Aluno a; /* Aluno que fez a prova */
    float q1, q2, q3, q4; /* Nota em cada questao */
};
typedef struct prova Prova;

/* Funções do ordenador que faltavam*/
void troca(Prova** a, Prova** b) {  // Uma funcao apenas para efetuar a troca
    Prova* temp = *a;
    *a = *b;
    *b = temp;
}

int compara(Prova* p1, Prova* p2) {  // Funcao para comparar e saber a hora de trocar

    float nota1 = p1->q1 + p1->q2 + p1->q3 + p1->q4;
    float nota2 = p2->q1 + p2->q2 + p2->q3 + p2->q4;

    if (nota1 > nota2) {
        return 0;  // A ordem está certa em relacao ao proximo
    } else if (nota1 < nota2) {
        return 1;  // Tem que trocar
    } else {
        // Aqui as notas foram iguais entao fica a criterio do nome
        return strcmp(p1->a.nome, p2->a.nome) > 0;  // se a > b, strcmp retorna 1, quer dizer que 1 > 0 == falso, entao retorna 0 e nao precisa de troca
    }
}

/* Função de ordenação bolha do enunciado*/
void ordena(int n, Prova** v) {
    int fim, i;
    for (fim = n - 1; fim > 0; fim--) {
        for (i = 0; i < fim; i++) {
            if (compara(v[i], v[i + 1])) {
                troca(&v[i], &v[i + 1]);
            }
        }
    }
}

int main() {
    // Criando espacos para alocar alunos e suas provas...
    Aluno aluno1 = {001, "Maria"}; Prova prova1 = {aluno1, 5.0, 6.5, 4.5, 8.0};
    Aluno aluno2 = {003, "Ana"}; Prova prova2 = {aluno2, 6.5, 8.0, 5.0, 4.5};
    Aluno aluno3 = {002, "Sandra"}; Prova prova3 = {aluno3, 8.0, 5.5, 5.5, 9.0};

    // Criando um vetor de ponteiros para o tipo Prova
    Prova* ponteiros[] = {&prova1, &prova2, &prova3};
    int tamanho = sizeof(ponteiros) / sizeof(ponteiros[0]);

    // Antes:
    printf("Antes de ordenar:\n\n");
    printf("Nome | Nota\n\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%s: %.2f\n", ponteiros[i]->a.nome, (ponteiros[i]->q1 + ponteiros[i]->q2 + ponteiros[i]->q3 + ponteiros[i]->q4)/4);
    }

    // Ordenando...
    ordena(tamanho, ponteiros);

    // Depois:
    printf("\nDepois de ordenar:\n\n");
    printf("Nome | Nota\n\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%s: %.2f\n", ponteiros[i]->a.nome, (ponteiros[i]->q1 + ponteiros[i]->q2 + ponteiros[i]->q3 + ponteiros[i]->q4)/4);
    }

    return 0;
}
