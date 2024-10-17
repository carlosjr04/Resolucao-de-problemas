#include <stdio.h>
#include <stdlib.h>


int distancia(int a, int b) {
    int mat[5][5] = {{0,15,30,5,12},
                    {15,0,10,1,28},
                    {30,10,0,3,11},
                    {5,17,3,0,80},
                    {12,28,11,80,0}};

    return mat[a][b];
}

int main(void) {
    int n;
    printf("Entre o tamanho do percurso em cidades transcorridas: ");
    scanf("%d", &n);
    int *vet = (int*)malloc(sizeof(int)*n);

    for(int i =0; i<n; i++) {
        printf("Entre o id da cidade: ");
        scanf(" %d", (vet+i));
    }
    int custo;
    custo = 0;
    for(int j = 1; j < n; j++) {
        custo += distancia(vet[j-1]-1, vet[j]-1);
    }
    printf("Custo é: %d", custo);

    return 0;
}