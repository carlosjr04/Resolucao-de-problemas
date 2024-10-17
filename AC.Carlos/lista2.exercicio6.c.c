#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
    int x= rand()%100;
    int a,tentativas=0;
    printf("tente acertar a numero escolhida:");

    while (1){
    scanf("%d",&a);
    tentativas++;

    if (a<x){
        printf("tente um numero maior \n");
        }
    if (a>x){
        printf("tente um numero menor \n");
        }
    if (x==a){
        printf("PARABENS!Voce acertou o numero %d com %d tentativas",x,tentativas);
        break;}
    }
    return 0;
    }
