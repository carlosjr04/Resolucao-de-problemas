#include <stdio.h>


int main( void ) {
    int mat[5][5] = {{0,15,30,5,12},
                    {15,0,10,1,28},
                    {30,10,0,3,11},
                    {5,17,3,0,80},
                    {12,28,11,80,0}};

    for(int i =0; i < 5; i++) {
        for(int j=0; j < 5; j++) {
            if (i <= j) printf("%d ", mat[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
}