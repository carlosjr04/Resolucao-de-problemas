#include <stdio.h>
#include <stdlib.h>

int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam){
    int i,count=0,j=0;

    float *media = (float*)malloc(n*sizeof(float));
    if (media==NULL){
        exit(1);
    }
    for (i=0;i<n;i++){
        media[i] = (t1[i]*p1)+(t2[i]*p2)/(p1+p2);
    }

    float maiormedia = media[0];
    for (i=0;i<n;i++){
        if (media[i]>maiormedia){
            maiormedia=media[i];
        }
    }
    for (i=0;i<n;i++){
        if (media[i]==maiormedia){
            count++;
        }
    }
    int *premiados = (int*)malloc(count*sizeof(int));
    if (premiados==NULL){exit(1);}

    for (i=0;i<n;i++){
        if (media[i]==maiormedia){
            premiados[j] = inscr[i];
            j++;
        }
    }
    *tam = count;
    free(media);
    return premiados;

}


int main(){
    int i,n,p1,p2,tam;


    printf("quantos alunos serao:");
    scanf("%i",&n);
    int *inscr = (int *)malloc(n * sizeof(int));
    float *t1 = (float *)malloc(n * sizeof(float));
    float *t2 = (float *)malloc(n * sizeof(float));

    printf("peso 1:");
    scanf("%i",&p1);
    printf("peso 2:");
    scanf("%i",&p2);


    for (i=0;i<n;i++){
        printf("matricula dos alunos:");
        scanf("%i",&inscr[i]);
        printf("primeira nota:");
        scanf("%f",&t1[i]);
        printf("segunda nota:");
        scanf("%f",&t2[i]);
    }
    int *premiado = premiados(n, inscr, t1, p1, t2, p2, &tam);
    printf("participantes vencedores:\n");


    for (i=0;i<tam;i++){
        printf("%d\n",premiado[i]);
    }

    free(premiado);

    free(inscr);
    free(t1);
    free(t2);
    return 0;
}
