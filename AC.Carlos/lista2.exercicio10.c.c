#include <stdio.h>

int mdc (int x,int y){
    int i,k;
    if (x>y){
        i=x;
    }if (y>x){
        i=x;
    }for (i;1;i-=1){
        if (x%i==0 && y%i==0){
            k=i;
            break;}
    }
    return k;
}
int main() {
    int a,b,maior_divisor;
    printf("digite dois numeros que queira saber o MDC:");
    scanf("%d %d",&a,&b);
    maior_divisor=mdc(a,b);
    printf("o mdc de %d e %d :%d",a,b,maior_divisor);
    return 0;
}
