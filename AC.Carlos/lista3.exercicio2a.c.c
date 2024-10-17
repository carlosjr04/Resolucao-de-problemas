#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5;
    int *p,*q;
    p=&i;
    q=&j;
    p==&i;
    printf("%d",p);
    //sera escrito o endereço de i//
    return 0;
}

