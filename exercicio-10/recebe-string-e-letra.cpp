#include <iostream>
#include <vector>

using namespace std;

vector<int>* encontra_letra(const string& str, char letra, int& tamanho) {
    vector<int>* posicoes = new vector<int>;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letra) {
            posicoes->push_back(i);
        }
    }

    tamanho = posicoes->size();

    return posicoes;
}

int main() {
    string minhaString;
    char minhaLetra;

    cout << "Digite uma string: ";
    cin >> minhaString;

    cout << "Digite uma letra: ";
    cin >> minhaLetra;

    int tamanho;

    vector<int>* posicoes = encontra_letra(minhaString, minhaLetra, tamanho);

    cout << "Posições onde a letra foi encontrada: ";
    for (int i = 0; i < tamanho; i++) {
        cout << (*posicoes)[i] << " ";
    }
    
    delete posicoes;

    return 0;
}
