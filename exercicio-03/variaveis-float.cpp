#include <iostream>

using namespace std;

void ordenaVariaveis(float &num1,float &num2, float &num3, float &num4) {
    int size = 3;
    bool isSwitch;
    float vetor[size] = {num1, num2, num3, num4};

    do {
        isSwitch = false;
        for(int i = 0; i < size; i++) {
            if(vetor[i] > vetor[i + 1]) {
                swap(vetor[i], vetor[i + 1]);
                isSwitch = true;
            }
        }
    } while(isSwitch);

    num1 = vetor[0];
    num2 = vetor[1];
    num3 = vetor[2];
    num4 = vetor[3];
}

int main () {
    /* Faça uma função que receba (por referência) 4 variáveis float e ordena (crescente) os
    valores destas variáveis. Depois faça o programa principal para testar a sua função. */
    float num1 = 5, num2 = 3, num3 = 6, num4 = 1;
    ordenaVariaveis(num1, num2, num3, num4);

    cout << "Numeros ordenados em ordem crescente: " << num1 << ", " << num2 << ", " << num3 << ", " << num4;

    return 0;
}