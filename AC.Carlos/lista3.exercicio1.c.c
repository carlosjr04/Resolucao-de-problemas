#include <stdio.h>

void calc_circulo(float r,float *c,float *area){

    *c=2.0*3.14159265*r;
    *area=3.14159265*(r*r);
}
int main(){
    float raio,c,area;
    printf("digite um raio:");
    scanf("%f",&raio);
    calc_circulo(raio,&c,&area);
    printf("Area:%f\n",area);
    printf("circuferencia:%f",c);
}
