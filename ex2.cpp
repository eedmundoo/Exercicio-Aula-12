#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Estudante {
    std::string nome;
    double nota;
};

// Função para comparar dois estudantes com base em seus nomes
bool compararNomes(const Estudante& a, const Estudante& b) {
    return a.nome < b.nome;
}

void ordenarEstudantes(std::vector<Estudante>& listaEstudantes) {
    std::sort(listaEstudantes.begin(), listaEstudantes.end(), compararNomes);
}

int main() {
    std::vector<Estudante> listaDeEstudantes = {
        {"Alice", 9.0},
        {"Bob", 8.5},
        {"Carol", 7.0},
        {"David", 8.0}
    };

    ordenarEstudantes(listaDeEstudantes);

    std::cout << "Lista de estudantes ordenada:" << std::endl;
    for (const Estudante& estudante : listaDeEstudantes) {
        std::cout << "Nome: " << estudante.nome << ", Nota: " << estudante.nota << std::endl;
    }

    return 0;
}
