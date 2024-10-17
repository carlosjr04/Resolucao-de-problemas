#include <stdio.h>
#include <string.h>

int main( void ) {
    char penis;
    char vec[500];
    char* sexo;
    printf("Entre uma string:");
    scanf("%499[^\n]", vec);
    printf("A entrada tem: %d caracteres\n", strlen(vec));
    printf("Entre um carctere:");
    scanf(" %c", &penis);
    sexo = strpbrk(vec, &penis);
    if (sexo == NULL) {
        printf("Não há nenhum caractere '%c' na sua string!", penis);
    } else {
        int n = sexo - vec;
        printf("A primeira entrada contendo '%c' na sua string ocorre no index %d\n", penis, n);
    }
    
    char *token = strtok(vec, " ");
    printf("Se printar sua string palavra por palavra, fica:\n");
    while(token != NULL) {
        printf("%s\n", token);

        token = strtok(NULL, " ");
    }

    return 0;
}