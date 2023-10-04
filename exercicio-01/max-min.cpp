#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &max, int &min) {
    for(int i = 0 ; i < n; i++) {
        cin >> vetor[i];
    }

    max = vetor[0];
    min = vetor[0];

    for(int i = 0 ; i < n; i ++) {
        if(vetor[i] > max) {
            max = vetor[i];
        }

        if(vetor[i] < min){
            min = vetor[i];
        }
    }
}

int main () {
   /*  Exercício 1:
    Escreva uma função chamada maxmin que receba um vetor de números inteiros
    chamado vetor, uma variável inteira n contendo o tamanho do vetor, e os endereços
    de duas variáveis inteiras, maximo e minimo nas quais será retornado o valor do
    elemento de maior valor e o valor do elemento de menor valor.
    Protótipo da Função:
    void maxmin(int vetor[], int n, int &maximo, int &minimo); */
    int n = 5, max, min;
    int vetor[n] = {};

    maxmin(vetor, n, max, min);


    cout << "min: " << min << endl;
    cout << "max: " << max;

    return 0;
} 