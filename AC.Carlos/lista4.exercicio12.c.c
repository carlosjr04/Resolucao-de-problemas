#include <stdio.h>

int main( void ) {
    char frase[21];
    char obj;
    printf("Entre uma string\n");
    scanf("%20[^\n]", frase);
    printf("Entre um caractere\n");
    scanf(" %c", &obj);

    int i =0;
    while(frase[i] != '\0') {
        if (frase[i] != obj) printf("%c", frase[i]);
        i++; 
    }

    return 0;
}