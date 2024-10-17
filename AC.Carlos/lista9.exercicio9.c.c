// Como a questão pede apenas a main, vou considerar que o struct
// para "ALUNO" não precisa de adição alguma

int main(){
    ALUNO turma[5];
    int tamanho, i;

    for(i = 0; i < 5; i++){
      printf("Insira as informações do aluno: ");
      scanf("%g", &turma[i].media);
    }

    ordena(turma, tamanho);

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: media = %.1f\n", i+1, turma[i].media);
    }

    return 0;
}
