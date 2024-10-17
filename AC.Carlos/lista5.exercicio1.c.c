#include <stdio.h>
#include <stdlib.h>
int vogais(char *vetor){
    int i,vogal=0;
    for (i=0;i<strlen(vetor);i++){
        if (vetor[i]=='a' || vetor[i]=='e' || vetor[i]=='i' || vetor[i]=='o' || vetor[i]=='u' || vetor[i]=='A' || vetor[i]=='E' ||vetor[i]=='I'||vetor[i]=='O'||vetor[i]=='U'){
            vogal+=1;
        }
    }
    return vogal;
}
int main()
{
    char vetor[80];
    int letras;
    printf("Escreva uma frase:");
    scanf("%80[^\n]",&vetor);
    letras = vogais(vetor);
    printf("o numero de vogais na string e:%i",letras);
    return 0;
}
