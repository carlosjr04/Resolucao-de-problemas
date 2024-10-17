#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,idade;
    char *vetor = (char*)malloc(80*sizeof(char));
    if (vetor==NULL){exit(1);}
    int otimo=0,pessimo=0,pessimo_idade=0,otimo_idade=0,ruim_idade_maior=0,soma=0;
    float porce_bom,porce_regular,porce_total=0,pessimo_porce,ruim=0,bom=0,regular=0,ruim_idade=0;
    printf("quantas pessoas foram na sessao:");
    scanf("%i",&n);

    printf("digite sua idade e sua opiniao sobre o filme entre 'otimo','bom','regular','ruim' ou 'pessimo':");
    for (i=0;i<n;i++){
        scanf(" %i %s",&idade,vetor);
        if (strcmp(vetor,"otimo")==0){
            otimo+=1;
            if (idade>otimo_idade){
                otimo_idade = idade;}
        }

        if (strcmp(vetor,"bom")==0){
            bom+=1;
            }

        if (strcmp(vetor,"regular")==0){
            regular+=1;
            }

        if (strcmp(vetor,"ruim")==0){
            ruim+=1;
            ruim_idade+=idade;
            if (idade>ruim_idade_maior){
                ruim_idade_maior = idade;}
            }

        if (strcmp(vetor,"pessimo")==0){
            pessimo+=1;
            if (idade>pessimo_idade){
                pessimo_idade = idade;}
            }
        }
    soma = bom + regular;
    porce_bom = (float)bom / soma * 100;
    porce_regular = (float)regular / soma * 100;
    porce_total = porce_bom - porce_regular;

    ruim = (float)ruim_idade/ruim;

    pessimo_porce = (float)pessimo/n*100;

    printf("Quantidade de respostas otimas:%i\ndiferenca percentual entre bom e regular:%.0f%%\nmedia das idades das pessoas que acharam ruim:%.2f\nporcentagem de respostas 'pessimas' e sua maior idade:%.0f%% %i anos\ndiferenca da maior idade das pessoas que acharam otimo e ruim:%i anos",otimo,porce_total,ruim,pessimo_porce,pessimo_idade,otimo_idade-ruim_idade_maior);
    free(vetor);
    return 0;
}
