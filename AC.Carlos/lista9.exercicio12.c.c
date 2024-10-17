#include <stdlib.h>
#include <stdio.h>

typedef struct Livro {
int ano;
char titulo[100];
char autor[100];
int nVolume; // Número de exemplares de um dado livro.
float preco;
}Livro;
typedef struct Biblioteca {
Livro **V; // Armazena a informação de n livros !!
int nLivros // Número de livros existentes na biblioteca.
}Biblioteca;

Livro* fillLivro() {
    Livro* novo = (Livro*)malloc(sizeof(Livro));
    printf("Ano: ");
    scanf(" %d", &(novo->ano));
    printf("Titulo: ");
    scanf(" %99[^\n]", novo->titulo);
    printf("Autor: ");
    scanf(" %99[^\n]", novo->autor);
    printf("Quantidade de exemplares: ");
    scanf(" %d", &(novo->nVolume));
    printf("Preço: ");
    scanf(" %f", &(novo->preco));

    return novo;
}

Biblioteca* fillBiblioteca(int numLivros) {
    Biblioteca* nova = (Biblioteca*)malloc(sizeof(Biblioteca));
    nova->nLivros = numLivros;
    nova->V = (Livro**)malloc(sizeof(Livro*)*numLivros);
    for(int i=0; i < numLivros; i++) {
        *(nova->V) = fillLivro();
    }

    return nova;
}

void valorBibioteca(Biblioteca* b1) {
    float custo = 0;
    for(int i = 0; i < b1->nLivros; i++) {
        custo += (b1->V[i]->preco)*(b1->V[i]->nVolume);
    }
    printf("%f", custo);
}

Livro* maiorBiblioteca(Biblioteca *b1) {
    Livro* max;
    int iMax = 0;
    for(int i = 0; i < b1->nLivros; i++) {
        if (b1->V[i]->nVolume > iMax) max = b1->V[i];
    }

    return max;
}

int main(void) {
    int n;
    printf("Entre a quantidade de livros da biblioteca ");
    scanf("%d", &n);
    Biblioteca* bib = fillBiblioteca(n);
    valorBibioteca(bib);
    Livro* maior = maiorBiblioteca(bib);
    printf("Livro com maior numero de exemplares: %s\n", maior->titulo);

    return 0;
}

