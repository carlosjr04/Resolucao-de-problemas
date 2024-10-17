#include <stdio.h>
#include <stdlib.h>

void repeticao(int* vet, int tam);

int main() {
    int n;
    int *vet;
    printf("Entre o comprimento do vetor desejado: \n");
    scanf("%d", &n);

    vet = (int*)malloc(n*sizeof(int));
    if (vet == NULL) {
        printf("Sem memória.\n");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        printf("Entre uma integral de 0 a 9\n");
        scanf("%d", (vet+i));
    }
    repeticao(vet, n);

    free(vet);
    return 0;
}

void repeticao(int *vet, int tam) {
    int o = 0;
    int j = 0;
    int *out;
    out = (int*)malloc(tam*sizeof(int));
    if (out == NULL) {
        printf("Sem memória");
        return;
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

    if (o > 0) {
        for(int i = 0; i < o; i++) {
            printf(" %d", out[i]);
            if(i+1 != o) printf(",");
        }
        printf("\n");
    } else {
        printf("Nenhum valor repetido no vetor.\n");
    }
    free(out);
}