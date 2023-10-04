#include <iostream>
#include <vector>

using namespace std;

int conta_primos(vector<int> vetorPrimos) {
    int contador = 0;
    for (int i = 0; i < vetorPrimos.size(); i++) {
        bool primo = true;
        for (int j = 2; j < vetorPrimos[i]; j++) {
            if (vetorPrimos[i] % j == 0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            contador++;
        }
    }
    return contador;
}

int main() {
    vector<int> vetorPrimos = {2, 3, 4, 6, 10, 11};

    int qtdePrimos = conta_primos(vetorPrimos);

    cout << qtdePrimos;

    return 0;
}
