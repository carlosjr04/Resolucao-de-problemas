#include <stdio.h>
#include <math.h>
int main(void)
{
    int n100,n50,n20,n10,n5,n1,dinheiro;
    printf("digite quantos reais tem:");
    scanf("%d",&dinheiro);

    n100=dinheiro/100;
    n50=(dinheiro%100)/50;
    n20=((dinheiro%100)%50)/20;
    n10=(((dinheiro%100)%50)%20)/10;
    n5=((((dinheiro%100)%50)%20)%10)/5;
    n1=((((dinheiro%100)%50)%20)%10)%5;
    printf("%d(100R$)\n%d(50R$)\n%d(20R$)\n%d(10R$)\n%d(5R$)\n%d(1R$)",n100,n50,n20,n10,n5,n1);
    return 0;
}
