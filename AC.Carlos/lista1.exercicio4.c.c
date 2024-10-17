#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float n1,n2,n3,VS;
    printf("Notas do aluno:");
    scanf("%f %f %f",&n1,&n2,&n3);
    int media(int x,int y,int z){
    int notam=(x+y+z)/3;
    return notam;
    }

    if (media(n1,n2,n3)>=6){
        printf("Aluno aprovado");
    }
    if (media(n1,n2,n3)<6 && media(n1,n2,n3)>=4){
        printf("Aluno em VS\n");
        printf("nota da VS do aluno:");
        scanf("%f",&VS);
        if (VS>=6){
            printf("Aluno aprovado");
        }
        if (VS<6){
            printf("Aluno reprovado");
        }
    }
    if (media(n1,n2,n3)<4){
        printf("Aluno reprovado");

    }
    return 0;
}
