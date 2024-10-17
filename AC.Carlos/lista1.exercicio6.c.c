#include <stdio.h>
#include <math.h>
int main(void)
{
    float a,b,c,delta,x1,x2;
    printf("digite tres numeros para ser respectivamente a,b,c:");
    scanf("%f %f %f",&a,&b,&c);

    delta=(b*b)-(4*a*c);
    if (delta>=0){
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);

        printf("A raiz quadrada e:%.1f %.1f",x1,x2);
    }
    else{
        printf("Nao e possivel calcular");
    }
    return 0;
}
