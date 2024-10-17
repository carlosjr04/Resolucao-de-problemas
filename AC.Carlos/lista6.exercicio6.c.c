#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, j, o;
    int *vet;
    int* out;
    printf("Entre o comprimento do vetor desejado: \n");
    scanf("%d", &n);

    vet = (int*)malloc(n*sizeof(int));
    out = (int*)malloc(n*sizeof(int));
    if (vet == NULL || out == NULL) 
    {
        printf("Sem memória.");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        printf("Entre uma integral de 0 a 9\n");
        scanf("%d", (vet+i));
    }
    o = 0;
    j = 0;
    while (j < n) {
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
        for(int i = j + 1; i < n; i++) {
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
    free(vet);
    free(out);

    return 0;
}