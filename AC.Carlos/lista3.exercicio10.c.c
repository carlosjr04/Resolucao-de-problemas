#include <stdio.h>
#include <stdlib.h>

float media(int n,float *v){
    int i;
    float medias,notas;
    printf("digite as notas:");
    for (i=0;i<n;i++){
        scanf("%f",&v[i]);
    }
    for (i=0;i<n;i++){
        notas+=v[i];
    }
    medias=notas/n;

    return medias;
}
int main()
{
    int numero;
    float vetor,funcao;
    printf("Digite quantas notas sao:");
    scanf("%d",&numero);
    printf("A media final do aluno e:%.2f",media(numero,&vetor));
    return 0;
}
