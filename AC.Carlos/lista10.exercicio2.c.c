#include <stdio.h>
#include <string.h>
#include <stdlib.h>


float crAluno(char* arquivo, char* matricula);

float crAluno(char* arquivo, char* matricula){

  FILE *file = fopen(arquivo, "r");
  if (file == NULL){
    printf("ERRO");
    exit(1);
  }

  char matriculaAluno[10];
  float cr;
    while (fscanf(file, "%s %g\n", matriculaAluno, &cr) != EOF) {
        if (strcmp(matriculaAluno, matricula) == 0) {
            fclose(file);
            return cr;
        }
    }

    fclose(file);
    return -1.0;

}
