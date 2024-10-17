Compromisso* busca(int n, Compromisso** vet, int d, int m, int a){
  int antecessor = -1, sucessor = n;

  while (antecessor <= sucessor){
    int meio = (antecessor + sucessor) / 2;
    if (vet[meio]->dta.aa < a ||
            (vet[meio]->dta.aa == a && vet[meio]->dta.mm < m) ||
            (vet[meio]->dta.aa == a && vet[meio]->dta.mm == m && vet[meio]->dta.dd < d)) {
            inicio = meio + 1;
        } else if (vet[meio]->dta.aa > a ||
                   (vet[meio]->dta.aa == a && vet[meio]->dta.mm > m) ||
                   (vet[meio]->dta.aa == a && vet[meio]->dta.mm == m && vet[meio]->dta.dd > d)) {
            fim = meio - 1;
        } else {
            return vet[meio];
        }
    }
    return NULL;
}
