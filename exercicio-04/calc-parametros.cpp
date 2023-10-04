#include <iostream>

using namespace std;

void calcParametros (int &x, int &y) {
    x = x + y;
    y = x - y;
}


int main () {
/*     Exercício 4:
    Escreva uma função calcula que:
    a. receba como parâmetros duas variáveis inteiras, X e Y;
    b. retorne em X a soma de X e Y;
    c. retorne em Y a subtração de X e Y. */
    int x = 5 , y = 8;

    calcParametros(x, y);

    cout << x << endl;
    cout << y << endl;

    return 0;
}