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

void mostrar(const ALUNO *aluno) {
    printf("Nome: %s\n", aluno->nome);
    printf("Nota 1: %.2f\n", aluno->nota1);
    printf("Nota 2: %.2f\n", aluno->nota2);
}

int main() {
    FILE *arquivo;
    int numAlunos;
    char opcao[10];

    arquivo = fopen("alunos.txt", "r+b");

    if (arquivo == NULL) {
        arquivo = fopen("alunos.txt", "w+b");
        numAlunos = 0;
    } else {
        fseek(arquivo, 0, SEEK_END);
        numAlunos = ftell(arquivo) / sizeof(ALUNO);
    }

    while (strcmp(opcao,"sair")!=0) {
        printf("\nMenu de Opções:\n");
        printf("1. Incluir\n");
        printf("2. Alterar\n");
        printf("3. Consultar\n");
        printf("4. Excluir\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%s", opcao);

        if (strcmp(opcao,"incluir")==0){
                if (numAlunos < 100) {
                    ALUNO novoAluno;
                    printf("Digite o nome do aluno: ");
                    scanf("%80s", novoAluno.nome);
                    printf("Digite a nota 1: ");
                    scanf("%f", &novoAluno.nota1);
                    printf("Digite a nota 2: ");
                    scanf("%f", &novoAluno.nota2);

                    salvar(arquivo, &novoAluno, numAlunos);
                    numAlunos++;
                } else {
                    printf("Limite máximo de alunos atingido!\n");
                }
                break;
            }
            else if (strcmp(opcao,"alterar")==0){
                if (numAlunos > 0) {
                    int posicao;
                    printf("Digite a posição do aluno a ser alterado (0 a %d): ", numAlunos - 1);
                    scanf("%d", &posicao);

                    if (posicao >= 0 && posicao < numAlunos) {
                        ALUNO aluno;
                        ler(arquivo, &aluno, posicao);

                        printf("Dados atuais do aluno:\n");
                        mostrar(&aluno);

                        printf("Digite o novo nome do aluno: ");
                        scanf("%80s", aluno.nome);
                        printf("Digite a nova nota 1: ");
                        scanf("%f", &aluno.nota1);
                        printf("Digite a nova nota 2: ");
                        scanf("%f", &aluno.nota2);

                        salvar(arquivo, &aluno, posicao);
                    } else {
                        printf("Posição inválida!\n");
                    }
                } else {
                    printf("Nenhum aluno cadastrado!\n");
                }
                break;
            }
            else if (strcmp(opcao,"consultar")==0){
                if (numAlunos > 0) {
                    int posicao;
                    printf("Digite a posição do aluno a ser consultado (0 a %d): ", numAlunos - 1);
                    scanf("%d", &posicao);

                    if (posicao >= 0 && posicao < numAlunos) {
                        ALUNO aluno;
                        ler(arquivo, &aluno, posicao);
                        mostrar(&aluno);
                    } else {
                        printf("Posição inválida!\n");
                    }
                } else {
                    printf("Nenhum aluno cadastrado!\n");
                }
                break;
            }
            else if (strcmp(opcao,"excluir")==0){
                if (numAlunos > 0) {
                    int posicao;
                    printf("Digite a posição do aluno a ser excluído (0 a %d): ", numAlunos - 1);
                    scanf("%d", &posicao);

                    if (posicao >= 0 && posicao < numAlunos) {
                        ALUNO ultimoAluno;
                        ler(arquivo, &ultimoAluno, numAlunos - 1);
                        salvar(arquivo, &ultimoAluno, posicao);

                        numAlunos--;
                        printf("Aluno excluído com sucesso!\n");
                    } else {
                        printf("Posição inválida!\n");
                    }
                } else {
                    printf("Nenhum aluno cadastrado!\n");
                }
                break;
            }
           else if (strcmp(opcao,"sair")==0){
                printf("Saindo do programa.\n");
                break;
            }

    }
    fclose(arquivo);

    return 0;
}
