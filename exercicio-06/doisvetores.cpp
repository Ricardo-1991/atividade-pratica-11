#include <iostream>
#include <vector>

using namespace std;

vector<int> intercala(int vet1[], int tam1, int vet2[], int tam2) {
    if(tam1 != tam2)
        cout << "Os tamanhos estão incorretos." <<endl;
        
    vector<int> resultado;
    int i = 0;

    for(int i = 0; i < tam1; i++) {
        resultado.push_back(vet1[i]);
        resultado.push_back(vet2[i]);
    }

    return resultado;
}

int main () {
    int tam1 = 5, tam2 = 5;

    int vet1[] = {1,2,3,4,5};
    int vet2[] = {6,7,8,9,10};

   vector<int> resultado = intercala(vet1, tam1, vet2, tam2);

   for(auto it = resultado.begin(); it != resultado.end(); it++){
      cout << (*it) << endl;
   }    
    


    return 0;
}