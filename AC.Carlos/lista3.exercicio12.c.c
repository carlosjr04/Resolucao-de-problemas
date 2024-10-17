#include <stdio.h>
#include <stdlib.h>
int main() {
    int i=0;
    char vetor[80];
    char letra;
    printf("Digite a palavra:\n ");

    while (1){

    letra = getch();
    if (letra=='\r'){
        break;
    }
    else{
        vetor[i]=letra;
        i++;}
    }
    printf("\n%s",vetor);

    return 0;
}
