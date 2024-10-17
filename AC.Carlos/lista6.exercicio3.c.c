#include <stdio.h>
#include <stdlib.h>
int *aprovados(int n,int *mat,float *notas,int *tam){


    int i,k=0;
    for (i=0;i<n;i++){
        if (notas[i]>=5){
            k++;
        }
    }
    int *alunos=(int*)malloc(k*sizeof(int));
    if (alunos==NULL){
            printf("sem memoria");
    exit(1);}

    k=0;
    for (i=0;i<n;i++){
        if (notas[i]>=5){
            alunos[k]=mat[i];
            k++;
        }
    }
    printf("os alunos acima da media sao:");
    for (i=0;i<k;i++){
        printf(" %d",alunos[i]);}
    printf("\n");
    *tam=k;
    free(alunos);
    return 0;

}
int main()
{
    int numero,i;
    int *tamanho;
    printf("quantos alunos sao: ");
    scanf("%d",&numero);

    int *pessoas=(int*)malloc(numero*sizeof(int));
    if (pessoas==NULL){
        printf("sem memoria");
        exit(1);}

    float *notas=(float*)malloc(numero*sizeof(float));
    if (notas==NULL){
        printf("sem memoria");
        exit(1);}

    for (i=0;i<numero;i++){
        printf("Digite as matriculas: ");
        scanf("%d",&pessoas[i]);}

    for (i=0;i<numero;i++){
        printf("Digite as notas: ");
        scanf("%f",&notas[i]);}
    *aprovados(numero,pessoas,notas,&tamanho);

    printf("o numero de alunos aprovados e:%d",tamanho);

    free(pessoas);
    free(notas);
    return 0;
}
