#include <stdio.h>
#include <stdlib.h>

int main()
{

    srand(time(NULL));
    int *vetor,maximo,x,i;
    int *comeco,*finall;
    printf("digite um numero par:");
    scanf("%d",&maximo);
    for (i=0;i<maximo;i++){
        x= rand()%100;
        vetor[i]=x;
    }
    for (i=0;i<(maximo/2);i++){
        comeco=vetor[i];
        printf("%d\n",comeco);
    }
    for (i=maximo-1;i>(maximo/2)-1;i--){
        finall=vetor[i];
        printf("%d\n",finall);
    }
    return 0;
}
