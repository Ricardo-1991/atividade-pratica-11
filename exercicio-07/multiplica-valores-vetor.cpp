#include <iostream>
#include <vector>

using namespace std;

void multiplica_por_n(vector<int> &vetor, int qtde, int n){
    for(auto it = vetor.begin(); it != vetor.end(); it++){
        cout << (*it) * n << endl;
    }
}

int main () {
    vector<int> vetor = {1,2,3,4,5};
    int qtde = vetor.size();
    int n = 5;

    multiplica_por_n(vetor, qtde, n);

    return 0;
}