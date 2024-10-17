#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome_arquivo[100];
    FILE *arquivo;
    double numero, soma = 0.0;
    int contador = 0;


    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%lf", &numero) == 1) {
        soma += numero;
        contador++;
    }

    fclose(arquivo);

    if (contador == 0) {
        printf("Nenhum n�mero encontrado no arquivo.\n");
        return 1;
    }

    // Calcular e imprimir a m�dia
    double media = soma / contador;
    printf("A m�dia dos n�meros lidos �: %.2lf\n", media);

    return 0;
}

