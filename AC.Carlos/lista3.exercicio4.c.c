#include <stdio.h>

int divisao(int n,int *max,int *min){
    int numero,k,p,i;
    for (i=2;i<n;i++){
        numero=n%i;
        if (numero==0 && k==0){
            *min=i;
            k++;
            p++;}
        if (numero==0){
            *max=i;
            p++;}
    }
    if (p==0){
        return p;}
    if (p>=1){
        return p;
    }
}
    int main(){
    int primo,funcao,min,max;
    printf("digite um numero:");
    scanf("%d",primo);
    funcao=divisao(primo,&max,&min);
    if (funcao==0){
        printf("esse numero e primo");}
    if (funcao>=1){
        printf("o menor divisor:%d \n o maior divisor:%d ",min,max);}
    return 0;
}
