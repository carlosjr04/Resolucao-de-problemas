#include <stdio.h>
#include <math.h>
int main(void)
{
    int primo;
    printf("digite o numero que queira saber se é primo:");
    scanf("%d",&primo);
    int i,k;
    k=0;
    for (i=2;i<primo;i++){
        if (primo%i==0){
            printf("NUMEORO NAO PRIMO");
            k++;
            break;}
    }
    if (k==0){
        printf("NUMERO PRIMO");
    }
    return 0;
}
