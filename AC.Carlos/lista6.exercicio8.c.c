#include <stdio.h>
#include <stdlib.h>

int* repeticao(int* vet, int tam, int *n);

int main() {
    int *n;
    int tam;
    int *vet;
    printf("Entre o comprimento do vetor desejado: \n");
    scanf("%d", &tam);

    vet = (int*)malloc(tam*sizeof(int));
    if (vet == NULL) {
        printf("Sem memória.\n");
        return 0;
    }
    for(int i = 0; i < tam; i++) {
        printf("Entre uma integral de 0 a 9\n");
        scanf("%d", (vet+i));
    }
    int* out = repeticao(vet, tam, n);

    if (*n > 0) {
        for(int i = 0; i < *n; i++) {
            printf(" %d", out[i]);
            if(i+1 != *n) printf(",");
        }
        printf("\n");
    } else {
        printf("Nenhum valor repetido no vetor.\n");
    }

    free(vet);
    free(out);
    return 0;
}

int* repeticao(int *vet, int tam, int*n) {
    int o = 0;
    int j = 0;
    int *out;
    out = (int*)malloc(tam*sizeof(int));
    if (out == NULL) {
        printf("Sem memória");
        *n = 0;
        return NULL;
    }
    while (j < tam) {
        int skip = 0;
        int count = 0;
        int target = vet[j];
        for(int i = 0; i < o; i++) {
            if (out[i] == target) {
                skip = 1;
                j++;
            }
        }
        if (skip == 1) {
            continue;
        }
        for(int i = j + 1; i < tam; i++) {
            if (vet[i] == target) count++;
        }
        if(count > 0) {
            out[o] = target;
            o++;
        }
        j++;
    }
    *n = o;
    return out;
}