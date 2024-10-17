#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char **nomes,nome[81];
    int lista,i,j;
    float media,variancia;



    nomes = (char**)malloc(80*sizeof(char*));

    while (1){
        nomes[lista] = (char*)malloc(81*sizeof(char));
        if (nomes==NULL){exit(1);}
        scanf("%s",nome);
        if (strcmp(nome, "FIM") == 0){
            break;
        }
        else{
            strcpy(nomes[lista], nome);

        }
        lista++;
    }
    i=0;
    for (i=0;i<lista;i++){
        media+=strlen(nomes[i]);
    }
    media = media / lista;
    for (i=0;i<lista;i++){

        variancia+= pow((strlen(nomes[i])-media) , 2);
    }
    variancia = variancia / lista;
    printf("media:%2.f\nvariancia:%2.f",media,variancia);
    for (i=0;i<lista;i++){
        free(nomes[i]);
        }
    return 0;
}
