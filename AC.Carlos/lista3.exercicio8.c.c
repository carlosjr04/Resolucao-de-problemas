#include <conio.h>
#include <stdio.h>
void main(){
      float vet[5] = {1.1,2.2,3.3,4.4,5.5};
      float *f;
      int i;
      f = vet;
      printf("contador/valor/valor/endereco/endereco");
      for(i = 0 ; i <= 4 ; i++){
            printf("\ni = %d",i);
            printf("   vet[%d] = %.1f",i, vet[i]);
            printf("   *(f + %d) = %.1f",i, *(f+i));
            printf("   &vet[%d] = %X",i, &vet[i]);
            printf("   (f + %d) = %X",i, f+i);
      }
      //nesse orgrama ele vai dar print do i indo de 0 a 4,printar os valores dentro do vetor vet e o ponteiro *f vira um vetor com mesmos valores de vet,e faz printar os falores do vetor *f usando a soma com i. alem disso tambem printa os endereços de todos os valores dos vetores vet e *f//
}
