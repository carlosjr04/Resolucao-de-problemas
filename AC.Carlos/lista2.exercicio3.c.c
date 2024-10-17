#include <stdio.h>

int main()
{
    int serie,i;
    printf("digite quanto termo tera na serie de Fibonacci:");
    scanf("%d",&serie);
    int primeiro=0,segundo=1,proximo=0;
    printf("Serie de Fibonacci:");
    for (i=0;i<serie;i++){
        if (i==0){
            printf("%d ",segundo);
        }else{
        proximo=primeiro+segundo;
        primeiro=segundo;
        segundo=proximo;
        printf("%d ",proximo);}
    }
    return 0;
}
