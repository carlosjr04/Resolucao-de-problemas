#include<stdio.h>
#include<string.h>


main(void){
  /* O vetor de tamanho indeterminado de caracteres recebe a string */
  char texto[]= "foi muito facil";

  /* Inicializa o contador i */
  int i;

  /* Para cada iterável i dentro do vetor 'texto', a partir do primeiro,
     incrementa em 1 até que chegue no final ou... */
  for (i = 0; texto[i]!='\0'; i++){

    /* Se o texto encontra um espaço em branco, interrompe o loop */
    if (texto[i] == ' ') break;
  }

  /* O índice aumenta em 1 */
  i++;

  /* Para cada iterável i no vetor a partir do índice , até o final do vetor */
  for ( ; texto[i]!='\0'; i++){

    /* Imprime "muito facil", sem espaço antes, porque o índice após o break
       começa a partir do 'm' da palavra 'muito' */
    printf("%c", texto[i]);
  }
}
