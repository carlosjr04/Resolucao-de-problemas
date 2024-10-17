#include <stdio.h>
#include <stdlib.h>


int main( void ) {
    int vec[20];
    int vec2[20];
    int out[20];
    char ops[21];
    printf("Começaremos preenchendo dois vetores de 20 inteiros\n");
    for(int i = 0; i < 20; i++) {
        printf("Entre o inteiro para o primeiro vetor, index %d\n", i);
        scanf("%d", &vec[i]);
        printf("Entre o inteiro para o segundo vetor, index %d\n", i);
        scanf("%d", &vec2[i]);
    }
    for(int i = 0; i < 20; i++) {
        printf("Entre as operações: '+', '-', '*' ou '/'\n");
        printf("Operação de index: %d", i);
        scanf("%c", &ops[i]);
        if (ops[i] != '*' && ops[i] != '-' && ops[i] != '+' && ops[i] != '/') i--;
    }

    int j = 0;
    while(ops[j] != '\0') {
        switch (ops[j])
        {
        case '+':
            out[j] = vec[j] + vec2[j];
            break;
        case '*':
            out[j] = vec[j]*vec2[j];
            break;
        case '-':
            out[j] = vec[j]-vec2[j];
            break;
        case '/':
            out[j] = vec[j]/vec2[j];
            break;
        default:
            break;
        }
        j++;
    }
    for(int i = 0; i < 20; i++) {
        printf(" %d", out[i]);
        if (i + 1 < 20) {
            printf(",");
        }
    }

    return 0;
    
}