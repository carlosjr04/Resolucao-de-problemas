#include <stdio.h>

typedef struct _ALUNO {
    char nome[81];
    float nota1, nota2;
} ALUNO;

void salvar(FILE *arquivo, const ALUNO *aluno, int posicao) {
    fseek(arquivo, posicao * sizeof(ALUNO), SEEK_SET);
    fwrite(aluno, sizeof(ALUNO), 1, arquivo);
}

void ler(FILE *arquivo, ALUNO *aluno, int posicao) {
    fseek(arquivo, posicao * sizeof(ALUNO), SEEK_SET);
    fread(aluno, sizeof(ALUNO), 1, arquivo);
}

void aprovados(FILE *arquivo, int numAlunos) {
    ALUNO aluno;

    printf("Alunos com média maior que 6.0:\n");

    for (int i = 0; i < numAlunos; i++) {
        ler(arquivo, &aluno, i);

        float media = (aluno.nota1 + aluno.nota2) / 2.0;

        if (media > 6.0) {
            printf("Nome: %s\n", aluno.nome);
            printf("Média: %.2f\n\n", media);
        }
    }
}

int main() {
    FILE *arquivo;
    int numAlunos;
    arquivo = fopen("alunos.dat", "r+b");

    if (arquivo == NULL) {
        arquivo = fopen("alunos.dat", "w+b");
        numAlunos = 0;
    } else {
        fseek(arquivo, 0, SEEK_END);
        numAlunos = ftell(arquivo) / sizeof(ALUNO);
    }

    ALUNO novoAluno;
    printf("Digite o nome do aluno: ");
    scanf("%80s", novoAluno.nome);
    printf("Digite a nota 1: ");
    scanf("%f", &novoAluno.nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &novoAluno.nota2);

    salvar(arquivo, &novoAluno, numAlunos);
    numAlunos++;

    aprovados(arquivo, numAlunos);

    fclose(arquivo);

    return 0;
}
