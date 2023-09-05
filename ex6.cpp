#include <iostream>
#include <vector>
#include <string>

struct Estudante {
    std::string nome;
    double nota1;
    double nota2;
};

// Função para modificar as notas de um estudante na posição especificada
void modificarNotasDoEstudante(std::vector<Estudante>& listaEstudantes, int posicao, double novaNota1, double novaNota2) {
    if (posicao >= 0 && posicao < listaEstudantes.size()) {
        listaEstudantes[posicao].nota1 = novaNota1;
        listaEstudantes[posicao].nota2 = novaNota2;
    }
}

int main() {
    std::vector<Estudante> listaDeEstudantes = {
        {"Alice", 9.0, 7.5},
        {"Bob", 8.5, 6.5},
        {"David", 8.0, 4.0}
    };

    std::cout << "Lista de estudantes antes das alterações:" << std::endl;
    for (const Estudante& estudante : listaDeEstudantes) {
        std::cout << "Nome: " << estudante.nome << ", Nota 1: " << estudante.nota1
                  << ", Nota 2: " << estudante.nota2 << std::endl;
    }

    int posicao;
    double novaNota1, novaNota2;
    std::cout << "Informe a posição do estudante a ser modificado: ";
    std::cin >> posicao;
    std::cout << "Informe a nova Nota 1: ";
    std::cin >> novaNota1;
    std::cout << "Informe a nova Nota 2: ";
    std::cin >> novaNota2;

    modificarNotasDoEstudante(listaDeEstudantes, posicao, novaNota1, novaNota2);

    std::cout << "Lista de estudantes após as alterações:" << std::endl;
    for (const Estudante& estudante : listaDeEstudantes) {
        std::cout << "Nome: " << estudante.nome << ", Nota 1: " << estudante.nota1
                  << ", Nota 2: " << estudante.nota2 << std::endl;
    }

    return 0;
}
