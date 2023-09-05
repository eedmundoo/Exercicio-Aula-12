#include <iostream>
#include <vector>
#include <string>

struct Estudante {
    std::string nome;
    double nota;
};

// Função para localizar a posição de um estudante pelo nome
int localizarEstudantePorNome(const std::vector<Estudante>& listaEstudantes, const std::string& nomeProcurado) {
    for (int i = 0; i < listaEstudantes.size(); i++) {
        if (listaEstudantes[i].nome == nomeProcurado) {
            return i; // Retorna a posição se encontrado
        }
    }
    return -1; // Retorna -1 se não encontrado
}

int main() {
    std::vector<Estudante> listaDeEstudantes = {
        {"Alice", 9.0},
        {"Bob", 8.5},
        {"David", 8.0}
    };

    std::string nomeProcurado;
    std::cout << "Informe o nome do estudante a ser localizado: ";
    std::cin >> nomeProcurado;

    int posicao = localizarEstudantePorNome(listaDeEstudantes, nomeProcurado);

    if (posicao != -1) {
        std::cout << "O estudante " << nomeProcurado << " está na posição " << posicao << "." << std::endl;
    } else {
        std::cout << "Estudante não encontrado na lista." << std::endl;
    }

    return 0;
}
