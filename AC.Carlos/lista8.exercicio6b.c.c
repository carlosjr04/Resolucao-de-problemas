#include <stdio.h>

//1-peão 2-cavalo 3-torres 4-bispos 5-reis 6-rainhas

typedef int Tabuleiro[8][8];

void contador(Tabuleiro tab) {
    int p, c, t, b, r, q, v;
    p = 0;
    c = 0;
    t = 0;
    b=0;
    r=0;
    q=0;
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
            case 2:
                c++;
                break;
            case 3:
                t++;
                break;
            case 4:
                b++;
                break;
            case 5:
                r++;
                break;
            case 6:
                q++;
                break;
            default:
                break;
            }
        }
    }
    printf("Numero de peões: %d\nNúmero de cavalos: %d\n Número de torres: %d\n Número de bispos: %d\nNúmero de reis: %d\nNúmero de rainhas: %d\n Número de casas vázias: %d", p, c, t, b, r, q, v);
}

int main() {
    Tabuleiro tab = {{1,3,0,5,4,0,2,1},{1,0,1,0,0,1,0,0}, {0,0,0,0,1,0,6,0}, {1,0,0,1,1,0,0,1}, {0,1,0,4,0,0,1,0},{0,0,3,1,0,0,1,1}, {1,0,6,6,0,0,1,0}, {1,0,5,0,1,1,0,6}};
    contador(tab);
    return 0;
}




