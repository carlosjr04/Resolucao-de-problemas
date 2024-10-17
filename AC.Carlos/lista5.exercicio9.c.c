#include <stdio.h>
#include <stdlib.h>
int main() {
    char nome[81],endereco[81],telefone[81],dados[201];
    int i;
    printf("Digite seu nome,endereco e telefone: ");
    scanf("%s %s %s",nome,endereco,telefone);

    strcpy(dados,nome);
    strcat(dados," ");

    strcat(dados,endereco);
    strcat(dados," ");

    strcat(dados,telefone);

    printf("%s",dados);
    return 0;
}
