#include <stdio.h>
#include <stdlib.h>
int vogais(char *vetor,char b){
    int i,letra=0;
    for (i=0;i<strlen(vetor);i++){
        if (vetor[i]==b){
            letra+=1;
        }
    }
    return letra;
}
int main()
{
    char vetor[20];
    char letra;
    int palavra;
    printf("Escreva uma palavra:");
    scanf("%80[^\n]",&vetor);

    printf("Escreva uma letra:");
    scanf(" %c",&letra);

    palavra = vogais(vetor,letra);
    printf("a palavra '%s' possui %i letras %c",vetor,palavra,letra);
    return 0;
}
