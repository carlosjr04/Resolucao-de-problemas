#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha,coluna,i,j,soma1=0,soma2=0;
    printf("qunatas linhas e quantas colunas:");
    scanf("%i %i",&linha,&coluna);

    int **matriz1=(int**)malloc(linha*sizeof(int*));
    if (matriz1==NULL){exit(1);}
    for (i=0;i<linha;i++){
        matriz1[i]=(int*)malloc(coluna*sizeof(int));
        if (matriz1[i]==NULL){exit(1);}
    }

    int **matriz2=(int**)malloc(linha*sizeof(int*));
    if (matriz2==NULL){exit(1);}
    for (i=0;i<linha;i++){
        matriz2[i]=(int*)malloc(coluna*sizeof(int));
        if (matriz2[i]==NULL){exit(1);}
    }

    int **matriz_soma=(int**)malloc(linha*sizeof(int*));
    if (matriz_soma==NULL){exit(1);}
    for (i=0;i<linha;i++){
        matriz_soma[i]=(int*)malloc(coluna*sizeof(int));
        if (matriz_soma[i]==NULL){exit(1);}
    }

    int **matriz_mult=(int**)malloc(linha*sizeof(int*));
    if (matriz_mult==NULL){exit(1);}
    for (i=0;i<linha;i++){
        matriz_mult[i]=(int*)malloc(coluna*sizeof(int));
        if (matriz_mult[i]==NULL){exit(1);}
    }

    printf("digite os numeoros da primeira matriz:");
    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            scanf("%d",&matriz1[i][j]);
        }
    }

    printf("digite os numeoros da segunda matriz:");
    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            scanf("%d",&matriz2[i][j]);
        }
    }

    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            matriz_mult[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    soma1 += matriz1[0][0] + matriz1[0][coluna-1] + matriz1[linha-1][0] + matriz1[linha-1][coluna-1];
    soma2 += matriz2[0][0] + matriz2[0][coluna-1] + matriz2[linha-1][0] + matriz2[linha-1][coluna-1];


    printf("soma das matrizes\n");
    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            printf("%i ",matriz_soma[i][j]);
        }
        printf("\n");
    }
    printf("multiplicacao das matrizes\n");
    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            printf("%i ",matriz_mult[i][j]);
        }
        printf("\n");
    }
    printf("soma dos cantos da primeira matriz:%i\n",soma1);
    printf("soma dos cantos da segunda matriz:%i\n",soma2);

    for (int i = 0; i < linha; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matriz_soma[i]);
        free(matriz_mult[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matriz_soma);
    free(matriz_mult);


    return 0;
}
