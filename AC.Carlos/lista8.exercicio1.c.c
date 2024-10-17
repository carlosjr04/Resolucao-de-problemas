#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha,coluna,i,j;
    float **v,valor=0,somatorio=0;
    printf("quantas linhas serao?:");
    scanf("%i",&linha);
    printf("quantas colunas serao?:");
    scanf("%i",&coluna);
    float soma[linha];

    v = (float **)malloc(linha*sizeof(float *));
    if (v == NULL) {exit(1);}

    for (i = 0; i < coluna; i++) {
        v[i]= (float*)malloc(coluna*sizeof(float));
        if (v[i] == NULL) {exit(1);}
    }

    printf("digite os numeros:");

    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            scanf("%f", &v[i][j]);
        }
    }


    for (i=0;i<linha;i++){
        for (j=0;j<coluna;j++){
            valor+=v[i][j];
            if (j==coluna-1){
                soma[i]=valor;
                valor=0;
            }
        }
    }

    for (i=0;i<linha;i++){
        somatorio+=soma[i];
    }
    if (somatorio/linha==soma[0]){
        printf("a soma esta correta");
    }else{
        printf("a soma esta incorreta");
    }
    for (i=0;i<linha;i++){
        free(v[i]);
    }
    return 0;
}
