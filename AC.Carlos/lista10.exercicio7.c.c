#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b);

int main(){
  FILE *file = fopen("numeros.txt", "r");
    float num;
    int cont = 0;

    while(fscanf(file, "%f", &num) != EOF) {
        cont++;
    }

    fclose(file);

    float *nums = (float *) malloc(cont * sizeof(float));
    if (nums == NULL){
      printf("Não foi possível alocar memória para este arquivo");
      return 1;
    }

    file = fopen("numeros.txt", "r");
    for(int i = 0; i < cont; i++) {
        fscanf(file, "%f", &nums[i]);
    }

    fclose(file);

    qsort(nums, cont, sizeof(float), compara);

    file = fopen("numeros.bin", "wb");
    fwrite(nums, sizeof(float), cont, file);

    fclose(file);
    free(nums);

  return 0;
}

int compara(const void *a, const void *b){
  float fa = *(const float*) a;
  float fb = *(const float*) b;

  return (fa > fb) - (fa < fb);
}
