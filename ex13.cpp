#include <iostream>
#include <vector>
#include <cmath>

// Função para calcular a média dos valores de um vector
double calcularMedia(const std::vector<double>& valores) {
    if (valores.empty()) {
        return 0.0;
    }
    
    double soma = 0.0;
    
    for (const double& valor : valores) {
        soma += valor;
    }
    
    return soma / valores.size();
}

// Função para calcular a soma acumulada dos quadrados das diferenças entre cada elemento e a média
double calcularSomaQuadradosDasDiferencas(const std::vector<double>& valores, double media) {
    double somaQuadrados = 0.0;
    
    for (const double& valor : valores) {
        double diferenca = valor - media;
        somaQuadrados += diferenca * diferenca;
    }
    
    return somaQuadrados;
}

int main() {
    int tamanhoAmostra, numeroFaces;
    std::cout << "Digite o tamanho da amostra (N): ";
    std::cin >> tamanhoAmostra;
    
    std::cout << "Digite o número de faces do dado: ";
    std::cin >> numeroFaces;
    
    std::vector<double> lancamentos;
    
    for (int i = 0; i < tamanhoAmostra; i++) {
        double lancamento = rand() % numeroFaces + 1; // Gerar um número aleatório entre 1 e o número de faces do dado
        lancamentos.push_back(lancamento);
    }
    
    double media = calcularMedia(lancamentos);
    
    double somaQuadradosDasDiferencas = calcularSomaQuadradosDasDiferencas(lancamentos, media);
    double variancia = somaQuadradosDasDiferencas / tamanhoAmostra;
    double desvioPadrao = std::sqrt(variancia);
    
    std::cout << "Média dos lançamentos: " << media << std::endl;
    std::cout << "Variança: " << variancia << std::endl;
    std::cout << "Desvio Padrão: " << desvioPadrao << std::endl;
    
    return 0;
}
