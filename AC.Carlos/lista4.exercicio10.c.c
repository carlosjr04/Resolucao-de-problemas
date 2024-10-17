#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int abs(int x) {
    if ((x) > 0) {
        return x;
    } else {
        return -(x);
    }
}

int strcontrol(char *str) {
    return (strcmp(str, "ótimo") != 0) && (strcmp(str, "bom") != 0) && (strcmp(str, "regular") != 0) && (strcmp(str, "ruim") != 0) && (strcmp(str, "péssimo") != 0);
}

int main( void ) {
    int *idades;
    char **opn;

    idades = (int*)malloc(sizeof(int)*20);
    opn = (char**)malloc(sizeof(char*)*20);
    if (idades == NULL) {
        printf("Falha ao alocar memória\n");
        exit(1);
    }

    if (opn == NULL) {
        printf("Falha ao alocar memória\n");
        exit(1);
    }

    for(int i = 0; i < 20; i++) {
        printf("Entre uma idade\n");
        scanf("%d", (idades+i));
        *(opn +i) = (char*)malloc(8);
        if (*(opn+i) == NULL) {
            printf("Falha ao alocar memória\n");
            exit(1);
        }
        memset(*(opn+i), '\0', 8);
        while (strcontrol(*(opn+i))) {
            printf("Entre uma opinião: ótimo, bom, regular, ruim ou péssimo\n");
            scanf(" %s", *(opn+i));
        }
    }
    int otimos, idade_dif, idade_pe, idade_ot, p_ru = {0};
    float p_b, p_re, p_pe, idade_ru, idade_ru_mu = {0}; 
    for(int i =0; i < 20; i++) {
        printf("%s", *(opn+i));
        if (strcmp(*(opn+i), "ótimo") == 0) {
            otimos++;
            if (idade_ot < *(idades+i)) idade_ot = *(idades+i);
        }
        if (strcmp(*(opn+i), "bom") == 0) p_b++;
        if (strcmp(*(opn+i), "regular") == 0) p_re++;
        if (strcmp(*(opn+i), "ruim") == 0) {
            p_ru++;
            idade_ru_mu += *(idades +i);
            if (*(idades+i) > idade_ru) {
                idade_ru = *(idades+i);
            }
        }
        if (strcmp(*(opn+i), "péssimo") == 0) {
            p_pe++;
            if (idade_pe < *(idades+i)) {
                idade_pe = *(idades+i);
            }
        }
    }
    if(p_ru == 0) p_ru++;
    printf("a)total de ótimos: %d.\n", otimos);
    printf("b)%.2f porcento responderam bom, e %.2f responderam regular.\n", (p_b/20)*100, (p_re/20)*100);
    printf("c)%.2f foi a média de idade das pessoas que responderam ruim.\n", (idade_ru_mu/p_ru));
    printf("d)%.2f relaram péssimo e o mais velho deles tinha %d anos\n", (p_pe/20)*100, idade_pe);
    printf("e)a diferença entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim foi: %d\n", abs(idade_ot-idade_ru));
    for(int i = 0; i < 20; i++) {
        free(*(opn+i));
    }
    free(opn);
    free(idades);

    return 0;
}