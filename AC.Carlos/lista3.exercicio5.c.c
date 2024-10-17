#include <stdio.h>
#include <stdlib.h>

float max_vet(float n,float *vet){
    float p,*v=(float*)malloc(n*sizeof(float));
    int i;
    for (i=0;i<n;i++){
        scanf("%f",&vet[i]);}
    for (i=0;i<n;i++){
        if (vet[i]>p){
            p=vet[i];}
    }
    return p;
    }
int main(){
    float numero,vetor,funcao;
    printf("digite quantos numeros serao:");
    scanf("%f",&numero);
    funcao=max_vet(numero,&vetor);
    printf("o maior numero e:%f",funcao);
    return 0;
    }
