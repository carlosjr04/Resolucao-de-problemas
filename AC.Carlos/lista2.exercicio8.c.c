#include <stdio.h>
int main() {
    int numero,x,p,resultado,resultado1;
    printf("digite um numero:");
    scanf("%d",&numero);
    p=(int)numero/100;
    x=numero-(p*100);
    resultado=p+x;
    resultado1=resultado*resultado;
    if (resultado1==numero){
        printf("%d e um numero legal",numero);
    }else{
        printf("%d nao e um numero legal",numero);
    }
    return 0;
}
