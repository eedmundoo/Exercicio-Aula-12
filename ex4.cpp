#include <iostream>
#include <vector>
#include <string>

struct Estudante {
    std::string nome;
    double nota1;
    double nota2;
};

// Função para calcular a média de um estudante
double calcularMedia(const Estudante& estudante) {
    return (estudante.nota1 + estudante.nota2) / 2.0;
}

// Função para determinar o diagnóstico (aprovado ou reprovado)
std::string determinarDiagnostico(double media) {
    return (media >= 6.0) ? "Aprovado" : "Reprovado";
}

// Função para listar estudantes, notas, médias e diagnósticos
void listarEstudantes(const std::vector<Estudante>& listaEstudantes) {
    std::cout << "Lista de estudantes:" << std::endl;
    for (const Estudante& estudante : listaEstudantes) {
        double media = calcularMedia(estudante);
        std::string diagnostico = determinarDiagnostico(media);

        std::cout << "Nome: " << estudante.nome << ", Nota 1: " << estudante.nota1
                  << ", Nota 2: " << estudante.nota2 << ", Média: " << media
                  << ", Diagnóstico: " << diagnostico << std::endl;
    }
}

int main() {
    std::vector<Estudante> listaDeEstudantes = {
        {"Alice", 9.0, 7.5},
        {"Bob", 8.5, 6.5},
        {"David", 8.0, 4.0}
    };

    listarEstudantes(listaDeEstudantes);

    return 0;
}
