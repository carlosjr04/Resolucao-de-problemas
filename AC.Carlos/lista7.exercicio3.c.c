#include <stdio.h>
#include <stdlib.h>

int vetor(int *v){
    int i;
    for (i=0;i<11;i++){
        v[i]=5*i;
    }
}
int main()
{
    int i;
    int *v= malloc(11*sizeof(int));
    if (v==NULL){
        printf("nao foi possivel alocar a memoria");
    }
    vetor(v);
    for (i=0;i<11;i++){
        printf(" %i", v[i]);
    }
    free(v);
    return 0;
}
