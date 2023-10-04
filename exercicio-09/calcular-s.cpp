#include <iostream>

using namespace std;

float calc_serie(int N) {
    float s = 0.0;

    for (int i = 1; i <= N; i++) {
        s += static_cast<float>(i) / (N - i + 1);
    }

    return s;
}

int main() {
    int N;
    cout << "Digite o valor de N: ";
    cin >> N;

    float resultado = calc_serie(N);

    cout << "O valor da série é: " << resultado << std::endl;

    return 0;
}
