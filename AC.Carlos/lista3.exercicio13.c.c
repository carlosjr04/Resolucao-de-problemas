#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    float e,f,g,h;
    char v[10];
    int x;
    int *ponteiro=&a;
    printf("quanto deseja diminuir no ponteiro?:");
    scanf("%i",&x);
    ponteiro-=x;
    if (ponteiro==&a){
        printf("endereco do ponteiro:%i\n",ponteiro);
        printf("o ponteiro esta apontando para 'a'");
    }
    if (ponteiro==&b){
        printf("endereco do ponteiro:%i\n",ponteiro);
        printf("o ponteiro esta apontando para 'b'");
    }
    if (ponteiro==&c){
        printf("endereco do ponteiro:%i\n",ponteiro);
        printf("o ponteiro esta apontando para 'c'");
    }
    if (ponteiro==&d){
        printf("endereco do ponteiro:%i\n",ponteiro);
        printf("o ponteiro esta apontando para 'd'");
    }

    if (ponteiro==&e){
        printf("endereco do ponteiro:%i\n",ponteiro);
        printf("o ponteiro esta apontando para 'e'");
    }
    if (ponteiro==&f){
        printf("endereco do ponteiro:%i\n",ponteiro);
        printf("o ponteiro esta apontando para 'f'");
    }
    if (ponteiro==&g){
        printf("endereco do ponteiro:%i\n",ponteiro);
        printf("o ponteiro esta apontando para 'g'");
    }
    if (ponteiro==&h){
        printf("endereco do ponteiro:%i\n",ponteiro);
        printf("o ponteiro esta apontando para 'h'");
    }
    if (ponteiro>&a && ponteiro<&h){
        printf("o ponteiro esta apontando para nenhuma das variaveis");
    }

return 0;
}

