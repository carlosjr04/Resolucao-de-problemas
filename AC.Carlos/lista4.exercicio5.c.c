#include <stdio.h>

void calcula_corrida(float dist,float *b1,float *b2){
    *b1=4.95+(2.5*dist);
    *b2=4.95+(3.0*dist);
}

int main(){
    float dist,b1,b2;
    scanf("%f",&dist);
    calcula_corrida(dist,&b1,&b2);
    printf("o preco da corrida na bandeira 1:R$%.2f\no preco da corrida na bandeira 2:R$%.2f",b1,b2);
    return 0;
}
