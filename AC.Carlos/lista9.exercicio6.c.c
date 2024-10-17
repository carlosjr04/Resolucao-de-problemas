#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    int codigo;
    char nome[81];
};
typedef struct pessoa Pessoa;

Pessoa* busca(int n, Pessoa** vet, int codigo);

Pessoa* busca(int n, Pessoa** vet, int codigo) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (codigo < vet[meio]->codigo) {
            fim = meio - 1;
        } else if (codigo > vet[meio]->codigo) {
            inicio = meio + 1;
        } else {
            return vet[meio];
        }
    }

    return NULL;
}

int main(void) {
    int n;
    printf("\nInsira a quantidade de funcionarios: ");
    scanf("%d", &n);
    Pessoa **pessoa;
    pessoa = (Pessoa **)malloc(n * sizeof(Pessoa *));

    for (int i = 0; i < n; i++) {
        pessoa[i] = (Pessoa *)malloc(sizeof(Pessoa));
        printf("\nInsira o codigo: ");
        scanf("%d", &pessoa[i]->codigo);
        printf("\nNome do funcionario: ");
        scanf("%80s", pessoa[i]->nome);
    }

    int numero;
    printf("\nQual funcionario deseja descobrir atraves do codigo: ");
    scanf("%d", &numero);

    Pessoa *recebe = busca(n, pessoa, numero);

    if (recebe != NULL) {
        printf("\nCodigo: %d, Nome: %s\n", recebe->codigo, recebe->nome);
    } else {
        printf("Funcionario nao encontrado.\n");
    }

    // Libere a memória alocada
    for (int i = 0; i < n; i++) {
        free(pessoa[i]);
    }
    free(pessoa);

    return 0;
}

