#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeComentarios(const char *entrada, const char *saida) {
    FILE *Entrada, *Saida;
    char linha[1000];

    Entrada = fopen(entrada, "r");
    if (Entrada == NULL) {
        printf("Nao foi possivel abrir o arquivo\n");
        exit(1);
    }


    Saida = fopen(saida, "w");
    if (Saida == NULL) {
        printf("Nao foi possivel abrir o arquivo\n");
        fclose(Entrada);
        exit(1);
    }
    while (fgets(linha, sizeof(linha), Entrada) != NULL) {
        char *comentario = strstr(linha, "//");
        if (comentario != NULL) {
            *comentario = '\0';
        }
        fprintf(Saida, "%s", linha);
    }
    fclose(Entrada);
    fclose(Saida);
}

int main() {
    char Entrada[1000];
    char Saida[1000];

    printf("Digite o nome do arquivo de entrada (.c): ");
    scanf("%s", Entrada);

    snprintf(Saida, sizeof(Saida), "%s_sem_comentarios.c", Entrada);
    removeComentarios(Entrada, Saida);

    printf("documento modificado:%s\n", Saida);
    return 0;
}
