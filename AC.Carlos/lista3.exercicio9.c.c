#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pulo[]= {1,2,3,4,5,6};

    printf("%d\n",*(pulo+2));
    //op�ao a pois pulo+2 � igual a mostrar o terceiro elemnto ja que a contagem do vetor come�a no 0//
    return 0;
}
