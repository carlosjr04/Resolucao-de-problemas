#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pulo[]= {1,2,3,4,5,6};

    printf("%d\n",*(pulo+2));
    //opçao a pois pulo+2 é igual a mostrar o terceiro elemnto ja que a contagem do vetor começa no 0//
    return 0;
}
