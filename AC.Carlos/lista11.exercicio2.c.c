#include <stdlib.h>

typedef struct elemento{
int info;
struct elemento *prox;
} Elemento;

Elemento *copia(Elemento *lst){
  if (lst == NULL){
    return NULL;
  }

  Elemento *novaLista = (Elemento *) malloc(sizeof(Elemento));
  if (novaLista == NULL){
    return NULL;
  }

  novaLista -> info = lst -> info;
  novaLista -> prox = copia(lst -> prox);

  return novaLista;

  // Não esqueci do free do malloc, ele acontece na função main.
}
