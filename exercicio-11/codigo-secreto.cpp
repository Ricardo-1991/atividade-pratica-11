#include <iostream>
#include <string>

std::string codificar(const std::string& entrada) {
    std::string resultado = entrada;

    for (char& c : resultado) {
        if (std::isalpha(c)) {
            if (c == 'z' || c == 'Z') {
                c = (c == 'z') ? 'a' : 'A';
            } else {
                c = c + 1;
            }
        }
    }

    return resultado;
}

std::string decodificar(const std::string& entrada) {
    std::string resultado = entrada;

    for (char& c : resultado) {
        if (std::isalpha(c)) {
            if (c == 'a' || c == 'A') {
                c = (c == 'a') ? 'z' : 'Z';
            } else {
                c = c - 1;
            }
        }
    }

    return resultado;
}

int main() {
    std::string original = "Estruturas de Dados";

    // Codifica a string
    std::string codificada = codificar(original);
    std::cout << "String codificada: " << codificada << std::endl;

    // Decodifica a string
    std::string decodificada = decodificar(codificada);
    std::cout << "String decodificada: " << decodificada << std::endl;

    return 0;
}
