#include <stdio.h>
#include <math.h>
int main(void)
{
    int impar,soma,i,k;
    printf("digite um numero:");
    scanf("%d",&impar);
    for (i=1;i<=impar;i+=2){
        soma+=i;
        k++;
        }
    printf("%i e a soma dos numeros impares\n",soma);
    printf("Fora somados %i numeros",k);
    return 0;
}
