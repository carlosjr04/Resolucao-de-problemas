#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int achar_numero(int n,int *v){
    int i;
    for (i=0;i<7;i++){
        if (v[i]==n){
            return i;}
    }
    return -1;
}

void trocar_vetor(int *v){
    int p,j,i,*vitor;
    for(i=0;i<i+1;i++){
        p+=v[i];
        vitor[i]=p;
        if (i==6){
            break;
        }
    }
    for(i=0;i<7;i++){
        v[i]=vitor[i];
    }
}

int main()
{
    int *vetor,i,numero,funcao;
    printf("Digite 7 valores:");
    for (i=0;i<7;i++){
        scanf("%d",&vetor[i]);
    }
    for (i=0;i<7;i++){
        printf("%d=posicao %d\n",vetor[i],i);
    }
    printf("digite um numero:");
    scanf("%d",&numero);
    funcao = achar_numero(numero,vetor);
    if (funcao==-1){
        printf("Este numero nao esta na lista");
    }else{
    printf("esta numero esta na posicao %d",funcao);}

    trocar_vetor(vetor);
    for (i=0;i<7;i++){
        printf(" %d",vetor[i]);
    }

    return 0;
}
