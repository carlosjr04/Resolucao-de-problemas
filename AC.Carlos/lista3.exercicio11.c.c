#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    #define MAX 10
    int pessoas,i,mulheres=0,homens,idade[MAX];
    float altura[MAX],media,mediat,var,variancia;
    char sexo[MAX];
    printf("Quantas pessoas sao:");
    scanf("%d",&pessoas);
    for (i=0;i<pessoas;i++){
        printf("Digite a idade,altura e sexo(F/M) respectivamente:");
        scanf("%d %f %c",&idade[i],&altura[i],&sexo[i]);
    }
    for (i=0;i<pessoas;i++){
        if (sexo[i]=='F'){
            if (idade[i]>=20 && idade[i]<=35){
                mulheres+=1;}
        }
        if (sexo[i]=='M'){
            if (altura[i]>1.8){
                homens+=1;}
        }
    }
    for (i=0;i<pessoas;i++){
        media+=altura[i];}
    mediat=media/pessoas;
    for (i=0;i<pessoas;i++){
        var+=pow((altura[i]-mediat),2);
    }
    variancia=sqrt(var)/pessoas-1;
    printf("Mulheres entre 20 e 35 anos:%d\nHomens acima de 1.8 metros:%d\na variancia da altura e:%f",mulheres,homens,var);
    return 0;
}
