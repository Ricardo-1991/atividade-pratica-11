#include <iostream>
#include <string>

std::string caracteres_comuns(const std::string& A, const std::string& B) {
    std::string C;

    for (char c : A) {
        // Verifica se o caractere está em B e não está em C
        if (B.find(c) != std::string::npos && C.find(c) == std::string::npos) {
            C += c;
        }
    }

    return C;
}

int main() {
    std::string stringA, stringB;

    // Solicita ao usuário que insira duas strings
    std::cout << "Digite a string A: ";
    std::cin >> stringA;

    std::cout << "Digite a string B: ";
    std::cin >> stringB;

    // Chama a função para encontrar os caracteres comuns
    std::string resultado = caracteres_comuns(stringA, stringB);

    // Imprime os caracteres comuns
    std::cout << "Caracteres comuns: " << resultado << std::endl;

    return 0;
}
