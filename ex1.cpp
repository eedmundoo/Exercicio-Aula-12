#include <iostream>
#include <vector>
#include <string>

struct Estudante {
    std::string nome;
    double nota;
};

void adicionarEstudantes(std::vector<Estudante>& listaEstudantes, int limite) {
    for (int i = 0; i < limite; i++) {
        Estudante estudante;
        
        std::cout << "Informe o nome do estudante " << (i+1) << ": ";
        std::cin >> estudante.nome;
        
        std::cout << "Informe a nota do estudante " << (i+1) << ": ";
        std::cin >> estudante.nota;
        
        listaEstudantes.push_back(estudante);
    }
}

int main() {
    int limite;
    std::cout << "Informe o limite de estudantes: ";
    std::cin >> limite;

    std::vector<Estudante> listaDeEstudantes;
    adicionarEstudantes(listaDeEstudantes, limite);

    std::cout << "Lista de estudantes:" << std::endl;
    for (const Estudante& estudante : listaDeEstudantes) {
        std::cout << "Nome: " << estudante.nome << ", Nota: " << estudante.nota << std::endl;
    }

    return 0;
}
``
