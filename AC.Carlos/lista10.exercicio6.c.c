#include <stdio.h>

int main() {
    int i;
    for (i=0;i<11;i++){
        char Arquivo[20];
        sprintf(Arquivo, "TEXTO%i.txt", i);

        FILE *arquivo = fopen(Arquivo, "w");
        if (arquivo == NULL) {
            fprintf(stderr, "Erro ao abrir o arquivo %s\n", Arquivo);
            return 1;}
        fprintf(arquivo, "%i\n",i);
        fclose(arquivo);
        printf("Arquivo criado com sucesso: %s\n", Arquivo);
    }
    return 0;
}
