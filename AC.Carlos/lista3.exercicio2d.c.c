#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5;
    int *p,*q;
    p=&i;
    q=&j;
    printf("%d",3*-*p/(*q)+7);

    return 0;
}


