#include <stdio.h>

int inverter(unsigned int x){
    int a1,b,c2,d,invertido;
    a1=x/100;
    b=x-(a1*100);
    c2=b/10;
    d=b-c2*10;
    invertido=(d*100)+(c2*10)+a1;
    return invertido;
    }
int main(){
    int numero;
    printf("digite um numero de 3 digitos:");
    scanf("%u",&numero);

    printf("o numero invertido é:%d",inverter(numero));
    return 0;
}
