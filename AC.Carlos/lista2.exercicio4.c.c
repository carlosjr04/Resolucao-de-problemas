#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    char a;
    int x;
    printf("tente acertar a letra escolhida \n");
    srand(time(NULL));
    x=((rand()%26+97));
    while (1){
    scanf(" %c",&a);

    if (x>(int)a){
        printf("tente uma letra maior \n");
        }
    if (x<(int)a){
        printf("tente uma letra menor \n");
        }
    if (x==(int)a){
        break;}
    }
    printf("VOCE ACERTOU!!!");
    return 0;
    }
