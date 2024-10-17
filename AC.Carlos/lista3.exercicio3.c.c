#include <stdio.h>
#include <stdlib.h>

int divisao(int n,int *max,int *min){
    int numero,k=0,p=0,i;
    for (i=2;i<n;i++){
        numero=n%i;
        if (numero==0 && k==0){
            *min=i;
            k+=1;
            p+=1;}
        if (numero==0){
            *max=i;
            p+=1;}
    }
    if (p==0){
        return 0;}
    if (p>=1){
        return 1;
    }
}
int main(){
    int primo,funcao,min,max;
    printf("digite um numero:");
    scanf("%d",&primo);
    funcao=divisao(primo,&max,&min);
    if (funcao==0){
        printf("esse numero e primo");}
    if (funcao==1){
        printf("Menor divisor:%d \nMaior divisor:%d ",min,max);}
    return 0;
}
