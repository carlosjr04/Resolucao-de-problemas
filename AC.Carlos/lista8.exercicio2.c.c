#include <stdio.h>
#include <stdlib.h>

int **alocMatriz(int tamanho_l, int tamanho_c);
void preencheMatriz(int **matriz, int tamanho_l, int tamanho_c);
int **somaMatrizes(int **matriz1, int **matriz2, int tamanho_l, int tamanho_c);
void freeMatriz(int **matriz, int tamanho_l);

int main(){
  int tamanho_l, tamanho_c;

  printf("Insira o comprimento e largura da matriz (exemplo: 2 2 = 2x2): ");
  scanf(" %d %d", &tamanho_l, &tamanho_c);

  int **matriz1 = alocMatriz(tamanho_l, tamanho_c);
  int **matriz2 = alocMatriz(tamanho_l, tamanho_c);

  printf("De as informacoes da primeira matriz: \n");
  preencheMatriz(matriz1, tamanho_l, tamanho_c);

  printf("De as informacoes da segunda matriz: \n");
  preencheMatriz(matriz2, tamanho_l, tamanho_c);

  int **soma_das_matrizes = somaMatrizes(matriz1, matriz2, tamanho_l, tamanho_c);

  printf("A soma das matrizes eh:\n");
  for(int i=0; i<tamanho_l; i++) {
    for(int j=0; j<tamanho_c; j++) {
      printf("%d ", soma_das_matrizes[i][j]);
    }
    printf("\n");
  }

  freeMatriz(matriz1, tamanho_l);
  freeMatriz(matriz2, tamanho_l);
  freeMatriz(soma_das_matrizes, tamanho_l);
  return 0;
}

int **alocMatriz(int tamanho_l, int tamanho_c){
  int i;

  int **matriz = (int **) malloc(tamanho_l * sizeof(int *));
  if (matriz == NULL) exit(1);

  for (i = 0; i < tamanho_l; i++){
    matriz[i] = (int *) malloc(tamanho_c * sizeof(int));
    if (matriz[i] == NULL) exit(1);
  }

  return matriz;
}

void preencheMatriz(int **matriz, int tamanho_l, int tamanho_c){
  int i, j;

  for (i = 0; i < tamanho_l; i++){
    for(j = 0; j < tamanho_c; j++){
      printf("Insira os valores da posicao \n[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

int **somaMatrizes(int **matriz1, int **matriz2, int tamanho_l, int tamanho_c){
  int i, j;

  int **soma_das_matrizes = alocMatriz(tamanho_l, tamanho_c);

  for(i=0; i<tamanho_l; i++) {
    for(j=0; j<tamanho_c; j++) {
      soma_das_matrizes[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  return soma_das_matrizes;
}

void freeMatriz(int **matriz,int tamanho_l){
  int i;

  if (matriz != NULL) {
    for (i = 0; i < tamanho_l; i++){
      if (matriz[i] != NULL) free(matriz[i]);
    }
  }
  free(matriz);
}
