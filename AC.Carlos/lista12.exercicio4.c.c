# include <stdio.h>
int conversao_binaria(int n, int *vetor_binario, int tamanho, int tamanho_fixo)
{
    vetor_binario[tamanho] = (n % 2);

    n /= 2;

    if(tamanho > 0){
        tamanho--;
        return conversao_binaria(n, vetor_binario, tamanho, tamanho_fixo);
    }
    if(tamanho == 0){
        int indice, binario;
        binario = 0;
        for(indice = 0; indice < tamanho_fixo; indice++){
            if(indice == 0){
                if(vetor_binario[indice] == 0){
                binario = 0;
                }
                else{
                binario = 1;
                }
            }
        else{
            if(vetor_binario[indice] == 0){
            binario *= 10;
            }
            else{
            binario = (binario * 10) + 1;
            }
        }
    }
    return binario;
    }
}

int main(){
    int n=3;
    int vetor[] = {1, 0, 1, 0};
    int tamanho = 4;
    int tamanho2= 4;

    int binario = conversao_binaria(n, vetor, tamanho, tamanho2);
    printf("%i",binario);


}
