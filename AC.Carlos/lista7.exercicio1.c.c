#include <stdio.h>

void f1 ( int v) {
     v = v + 1;
     printf (" f1 = %d\n " , v );
}
void f2 ( int *v) {
     *v = *v + 1;
     printf (" f2 = %d\n " , *v );
}
int f3 ( int v) {
     v = v + 1;
     printf (" f3 = %d\n " , v );
     return v;
}
int main (void) {
     int v = 1;
     f1 ( v );
     f2 (&v );
     v = f3 ( v );
     printf (" main = %d \n" , v );
     return 0;
}
//o primeiro f1 pegara o v=1 e somara mais um e vai printar mas sem mudar o valor do v no main//
//depois o f2 ira pegar o endereço do v e ira adicionar +1 no v fazendo com que o v vire 2//
//quando puxar a funcao f3 fara com que o v que agora é 2 some mais um e faça com que esse seja o novo valor de v, e no fim printa "main = 3"//
