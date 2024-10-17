#include <stdio.h>
#include <stdlib.h>

float *acima_da_media(int n,float *vet,int *tam){
    float media=0;
    int k=0,i;

    for (i=0;i<n;i++){
        media+=vet[i];
    }
    media=media/n;
    printf("a media do vetor:%.1f\n",media);

    float *vet1=(float*)malloc(n*sizeof(float));
    if (vet1==NULL){
    *tam=0;
    return NULL;}

    for (i=0;i<n;i++){
        if (vet[i]>media){
            vet1[k]=vet[i];
            k++;
        }
    }

    *tam=k;
    printf("existem %d valores maiores que a media,sendo eles:",*tam);
    for (i=0;i<k;i++){
        printf(" %.1f",vet1[i]);
    }

    free(vet1);
    return 0;
}



int main()
{
    int numero,*tamanho,i;


    printf("tamanho do vetor: ");
    scanf("%d",&numero);

    float *vetor=(float*)malloc(numero*sizeof(float));
    if (vetor==NULL){return NULL;}

    printf("Digite o vetor: ");
    for (i=0;i<numero;i++){
        scanf("%f",&vetor[i]);
    }
    acima_da_media(numero,vetor,&tamanho);
    free(vetor);
    return 0;
}
