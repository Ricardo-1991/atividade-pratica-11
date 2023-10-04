#include <iostream>
#include <vector>

using namespace std;

int insere_meio(vector<int>&vetor, int &qtde, int elemento) {

    int meio = vetor.size() / 2;

    for(int i = 0; i < vetor.size(); i++){
         if(i == meio) {
            vetor.insert(vetor.begin() + meio, elemento);
         }
    }
    qtde = vetor.size();

    return qtde;
}

int main() {
    vector<int> vetor = {1, 2, 20, 4, 5, 6};
    int qtde = 6;
    int elemento = 100;

    cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    int novaQtde = insere_meio(vetor, qtde, elemento);

    cout << "Novo vetor: ";
    for (int i = 0; i < novaQtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "Nova quantidade de elementos: " << novaQtde << endl;

    return 0;
}