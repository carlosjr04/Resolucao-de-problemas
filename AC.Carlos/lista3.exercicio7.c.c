#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pti;
    int vet=[10,7,2,6,3];
    pti=vet;
    //a:esta correta,pois *pti apomta para o primeiro termo do vetor que nesse caso é 10//
    //b:esta correta,pois *pti apona para o primeiro termo e para apontar para os termos seguintes pode-se dizer que os proximos termos do vetor sao *pti+1,*pti+2,*pti+3 e assim sucecivamente//
    //c:esta correta porque o pti tambem sendo um vetor ele aponta para o quarto termo  (em que a contagem começa com 0)//
    //d:esta incorreta,porque o elemento 10 corresponde ao elemnto 0 do vetor(pti[10])//
    //e:esta correta , assim como ocorre na letra b o veti+3 corresponde ao quarto elemnto do vetor//
    return 0;
}
