#include <stdio.h>


void alfabeto(char *v)
{
    int i,numero;
    for (i=0;i<26;i++){
        numero='a'+i;
        v[i]=(char)numero;
    }
}
int main(){
    char *v = (char*)malloc(27*sizeof(char));
    if (v==NULL){
        printf("nao foi possivel alocar a memoria");
    }
    int i;
    alfabeto(v);
    for (i=0;i<26;i++){
        printf("%c ", v[i]);
    }
    free(v);
return 0;
}
