#include <iostream>
#include <vector>
#include <string>

struct Estudante {
    std::string nome;
    double nota;
};

// Função para comparar dois estudantes com base em seus nomes
bool compararNomes(const Estudante& a, const Estudante& b) {
    return a.nome < b.nome;
}

// Função para inserir um estudante ordenadamente no vetor
void inserirEstudanteOrdenadamente(std::vector<Estudante>& listaEstudantes, const Estudante& novoEstudante) {
    auto posicaoInsercao = std::lower_bound(listaEstudantes.begin(), listaEstudantes.end(), novoEstudante, compararNomes);
    listaEstudantes.insert(posicaoInsercao, novoEstudante);
}

int main() {
    std::vector<Estudante> listaDeEstudantes = {
        {"Alice", 9.0},
        {"Bob", 8.5},
        {"David", 8.0}
    };

    Estudante novoEstudante;
    std::cout << "Informe o nome do novo estudante: ";
    std::cin >> novoEstudante.nome;
    std::cout << "Informe a nota do novo estudante: ";
    std::cin >> novoEstudante.nota;

    inserirEstudanteOrdenadamente(listaDeEstudantes, novoEstudante);

    std::cout << "Lista de estudantes ordenada:" << std::endl;
    for (const Estudante& estudante : listaDeEstudantes) {
        std::cout << "Nome: " << estudante.nome << ", Nota: " << estudante.nota << std::endl;
    }

    return 0;
}
