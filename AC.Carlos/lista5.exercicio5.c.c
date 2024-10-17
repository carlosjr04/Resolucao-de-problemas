main(void)
{
    char frase[80]="o rato roeu a roupa do rei de roma";
    char *p;
    p = frase;
    p[2]='m';
    p[6]='\0';
    printf("%s\n", frase);
    p = p + 3;
    printf("%s\n",p);
    printf("%d\n",strlen(frase));
}
//primeiramente ele vai printar o mato pois ele alterou o segundo elemento da string por 'M' e no sexto espaço colocou \0 em que acaba a string. depois sera ´printado 'ato' ja que *p indica o começo do vetor,logo,somar mais 3 faz com que o comeco do vetor seja o 'a',terkmionando em \0. alem disso,no fim ele printa 6 pois é o tamanho da string 'frase'.

