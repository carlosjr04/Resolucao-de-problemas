#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int horas,salario,dinheiro;
    printf("Digite as horas trabalhadas na semana e seu salario por hora:");
    scanf("%d %d",&horas,&salario);

    if (horas<=40){
        dinheiro=horas*salario;
        printf("Seu salario nesta semana foi %dR$",dinheiro);
    }
    if (horas>40 && horas<=60){
        dinheiro+=(40*salario) + ((horas-40)*(salario*1.5));
        printf("Seu salario nesta semana foi %dR$",dinheiro);
    }
    if (horas>60){
        dinheiro+=(40*salario) + (20*(salario*1.5))+ (horas-60)*(salario*2);
        printf("Seu salario nesta semana foi %dR$",dinheiro);
        }
    return 0;
    }
