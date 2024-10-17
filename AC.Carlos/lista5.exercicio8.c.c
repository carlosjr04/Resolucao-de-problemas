#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char palavra[20],palavra2[20];
    int i,k=0,t=1,j,p;
    printf("Digite duas palavras: ");
    scanf("%s %s",palavra,palavra2);
    if (strlen(palavra)==strlen(palavra2)){
        for (i=0;i<strlen(palavra);i++){
            if (palavra[i]==palavra2[i]){
                k+=1;}
        }
    }
    if (k==strlen(palavra)){
        printf("As palavras sao iguais\n");
    }else{
        printf("As palavras nao sao iguais\n");
    }
    if (strlen(palavra2)>strlen(palavra)){
        for (i=0;i<strlen(palavra2);i++){
            if (palavra2[i]==palavra[0]){
                p=0;
                for (j=0;j<strlen(palavra);j++){
                    if (palavra2[i+j]==palavra[j]){
                        p++;
                    }
                }
                if (p==strlen(palavra)){
                    printf("%s e uma substring de %s",palavra,palavra2);
                    t=0;
                    break;}

            }
        }if (t==1){
        printf("%s nao e uma substring de %s",palavra,palavra2);}
    }


    return 0;
}
