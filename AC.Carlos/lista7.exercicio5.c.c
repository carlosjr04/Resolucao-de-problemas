#include <stdio.h>
#include <string.h>
int main()
{
    char *palavra = (char*)malloc(81*sizeof(char));
    char *palavra_nova = (char*)malloc(81*sizeof(char));
    if (palavra==NULL || palavra_nova == NULL){
        printf("nao foi possivel alocar a memoria");
        return 1;
    }
    int i,count =1,p=0;
    printf("digite uma frase para ser decodificada")
    scanf("%80[^\n]", palavra);

    for (i=0;i<strlen(palavra);i++){
        if (palavra[i] != ' '){
            palavra_nova[i-p]=palavra[i]+count;
            count++;
            if (count>5){
                count=1;}
        }
        else{
            p++;
        }

    }
    printf("%s", palavra_nova);
    free(palavra);
    free(palavra_nova);
    return 0;
}
