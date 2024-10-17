#include <stdio.h>
#include <string.h>
int main (void) {
    char *frase = "Otimo teste";
    char *p , misterio[80];
    int i = 0;
    int j = 0;
    p = frase + strlen ( frase ) - 1;

    while (*p != ' ') {
    misterio[i] = *p;
    i ++; p --;
    }
    misterio[i] = ' '; i ++;
    while ( frase[j] != ' ') {
    misterio [i] = frase[j];
    j ++; i ++;
    }
    misterio[i] = '\0 ';
    puts(misterio);

    return 0;
}
//na soma do p vai fazer com que o char que é um vetor ande o nuymnero de letras para frente -1 sobrando so o e,depois vai mmudando o misterio do e ate o t escrevendo teste ao contrario
//logo apos vai botar em misterio a palavra 'otimo' do char 'frase'
