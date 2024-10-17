#include <stdio.h>
#include <math.h>

int main()
{
    int base,expoente,elevado;
    printf("Digite a base e expoente respectivamente:");
    scanf("%d %d",&base,&expoente);
    elevado=pow(base,expoente);
    printf("Resultado:%d",elevado);
    return 0;
}
