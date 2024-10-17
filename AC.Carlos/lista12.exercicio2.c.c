#include <stdio.h>

int somaImpares(int vetor[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    } else {
        int ultimoElemento = vetor[tamanho - 1];
        int somaRestante = somaImpares(vetor, tamanho - 1);
        if (ultimoElemento % 2 != 0) {
            return ultimoElemento + somaRestante;
        } else {
            return somaRestante;
        }
    }
}
