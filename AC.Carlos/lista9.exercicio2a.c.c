// Prof, desculpe mas vou ser chato nessa questão!

/* 1º erro do código: não importar as bibliotecas.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/

typedef struct data {
  int dia;
  int mes;
  char nomeMes[12];
} Data;

main() {
  Data aniversarios[3] = { {5,1,"JANEIRO"},
  {4,2,"FEVEREIRO"},{10,3,"MAIO"} };
  int a;
  Data *p_dt;
  p_dt=&aniversarios[2];
  printf("Nome do mês %d eh: %s.", p_dt->mes, p_dt->nomeMes);
  strcpy(p_dt->nomeMes, "MARCO");
  printf("\nNumero de letras : %d", strlen(p_dt->nomeMes));

  /* O erro que precisa ser apontado é este:
     - O malloc retorna um ponteiro, então p_dt2 precisa ser um ponteiro também.
     Para consertar isso, basta colocar um '*' na frente;

     Outros erros que vou bater o pé e apontar:
     - Ausência do IF do Malloc;
     - Ausência do FREE do Malloc ao final do código;
  */

  Data p_dt2 = (Data *) malloc(sizeof(Data));
  p_dt2 = &aniversarios[0];
}
