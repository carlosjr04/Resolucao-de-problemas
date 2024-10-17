#include <stdio.h>
#include <stdlib.h>

int maiores(int n,int *vet,int x){
    int k,i;
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<n;i++){
        if (vet[i]>x){
            k+=1;}
    }
    return k;
}

int main(){
    int numero,maior,vetor;
    printf("quantos numeros serao e o numero para comparar:");
    scanf("%d %d",&numero,&maior);
    printf("tem %d numeros maiores que %d",maiores(numero,&vetor,maior),maior);
    return 0;
}
