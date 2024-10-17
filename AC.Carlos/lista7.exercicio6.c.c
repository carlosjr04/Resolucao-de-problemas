#include <stdio.h>
#include <string.h>
#define MAX 50
int main (void) {
     char texto[MAX +2], temp ;
     int tam , i;
     gets( texto );
     tam = strlen ( texto );
     for (i = 0; i < tam ; i ++) {
         temp = texto[i];
         texto[i] = texto[ tam -1 - i ];
         texto[strlen(texto) -1 - i] = temp ;
     }
     puts ( texto );
     return 0;
}
//este program ate a metade da palavra inverte a palavra fazendo com que fique de frente para tras,porem com o passar da metade do loop ela fara com que inverta a palavra novamente diexando ela como estava antes//
