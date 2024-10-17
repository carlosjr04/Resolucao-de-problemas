#include <stdio.h>

int main( void ) {
    char frase[51];
    int vec[58] = { 0 };
    scanf("%50[^\n]", frase);

    for(int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] >= 65 && frase[i] <=122) {
            int index = frase[i] - 65;
            vec[index]++;
        }
    }

    for(int i = 0; i < 58; i++) {
        if(vec[i] > 0) printf(" %c = %d ", i+65, vec[i]);
    }

    printf("\n");

    return 0;
}