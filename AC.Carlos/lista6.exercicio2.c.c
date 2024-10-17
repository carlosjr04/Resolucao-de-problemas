
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *compactar(char *s){
    int i;
    char *palavra=(char*)malloc(81*sizeof(char));
    if (palavra==NULL){return NULL;}
    for (i=0;i<strlen(s);i++){
        if (s[i]!=' ' && s[i-1]!=' ' || s[i+1]!=' '){
            palavra[i]=s[i];
        }
    }
    palavra[i]= '\0';
    printf("%s",palavra);

    free(palavra);
    return 0;
}
int main()
{
    char frase[81];
    printf("Digite uma frase: ");
    scanf("%[^\n]",frase);
    compactar(frase);
    return 0;
}
