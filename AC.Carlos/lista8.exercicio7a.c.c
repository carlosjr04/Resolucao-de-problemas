#include <stdio.h>

void distancia(int a, int b) {
    if (a > 4 || a < 0 || b > 4 || b < 0 ) {
        printf("input invalid\n");
        return;
    }
    int mat[5][5] = {{0,15,30,5,12},
                    {15,0,10,1,28},
                    {30,10,0,3,11},
                    {5,17,3,0,80},
                    {12,28,11,80,0}};

    printf("A distância é %d\n", mat[a][b]);
}

int main(void) {
    int a, b;
    do {
        printf("Entre a cidade A: ");
        scanf("%d", &a);
        printf("Entre a cidade B: ");
        scanf(" %d", &b);
        distancia(a-1,b-1);
        

    } while (a != 0 && b != 0);
    
    return 0;
}