#include <stdio.h>
#include <stdlib.h>

int trans(int **v1,int **v2,int linhas,int colunas){
    int i,j;

    for (i=0;i<linhas;i++){
        for (j=0;j<colunas;j++){
            if (v1[i][j] != v2[i][j]){

                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int **m1,**m2;
    int i,j,resultado,linha,coluna;
    printf("quantas linhas serao?:");
    scanf("%i",&linha);
    printf("quantas colunas serao?:");
    scanf("%i",&coluna);

    m1 = (int**)malloc(linha*sizeof(int*));
    m2 = (int**)malloc(linha*sizeof(int*));
    for (i=0;i<linha;i++){
        m1[i] = (int*)malloc(coluna*sizeof(int));
        m2[i] = (int*)malloc(coluna*sizeof(int));
    }

    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            scanf("%i",&m1[i][j]);
        }
    }


    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            m2[i][j]=m1[j][i];
        }
    }
    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            printf("%i ",m2[i][j]);
        }
        printf("\n");
    }
    resultado = trans(m1,m2,linha,coluna);

    if (resultado==1){
        printf("essa matriz nao e simetrica");
    }
    if (resultado==0){
        printf("essa matriz e simetrica");
    }

    for (i=0;i<linha;i++){
        free(m1[i]);
        free(m2[i]);
    }
    return 0;
}


