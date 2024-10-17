#include <stdio.h>
#include <math.h>
int main(void)
{
    int X=1,Z=0,soma,i;
    while (X>Z){
        printf("digite X e Z(X tem que ser maior que Z):");
        scanf("%d %d",&X,&Z);
    }
    soma=0;
    i=0;
    for (X;X<=Z;X+=1){
        soma+=X;
        i+=1;
        if (soma>Z){
            break;
        }
    }
    printf("A soma vale %i\n",soma);
    printf("Foram somados %i numeros",i);
    return 0;
}
