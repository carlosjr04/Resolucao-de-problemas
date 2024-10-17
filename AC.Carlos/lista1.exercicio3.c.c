
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n1,n2,resultado;
    char operacao;
    printf("Escreva a operaçao(+,-,/,*):");
    scanf("%s",&operacao);
    printf("Escreva os numeros da operaçao:");
    scanf("%i %i",&n1,&n2);
    if (operacao=='+'){
        resultado=(n1+n2);
        printf("a soma e:%i",resultado);
    }
    if (operacao=='-'){
        resultado=(n1-n2);
        printf("a subtracao e:%i",resultado);
    }
    if (operacao=='*'){
        resultado=n1*n2;
        printf("a multiplicacao e:%i",resultado);

    }
    return 0;
}
