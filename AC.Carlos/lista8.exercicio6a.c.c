#include <stdio.h>

//1-peão 2-cavalo 3-torres 4-bispos 5-reis 6-rainhas

typedef int Tabuleiro[8][8];

void peoes_bispos_vazias(Tabuleiro tab) {
    int p, b,v;
    p = 0;
    b=0;
    v=0;
    for(int i = 0; i < 8; i++) {
        for(int j =0; j<8; j++) {

            switch (tab[i][j])
            {
            case 0:
                v++;
                break;
            case 1:
                p++;
                break;
            
            case 4:
                b++;
                break;

            default:
                break;
            }
        }
    }
    printf("Numero de peões: %d\n Número de bispos: %d\n Número de casas vázias: %d", p, b, v);
}

int main() {
    Tabuleiro tab = {{1,3,0,5,4,0,2,1},{1,0,1,0,0,1,0,0}, {0,0,0,0,1,0,6,0}, {1,0,0,1,1,0,0,1}, {0,1,0,4,0,0,1,0},{0,0,3,1,0,0,1,1}, {1,0,6,6,0,0,1,0}, {1,0,5,0,1,1,0,6}};
    peoes_bispos_vazias(tab);
    return 0;
}




