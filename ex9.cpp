#include <iostream>
#include <vector>

// Função para ler uma lista de temperaturas dentro de um vector
void lerTemperaturas(std::vector<double>& temperaturas) {
    char continuar;
    
    do {
        double temperatura;
        std::cout << "Informe a temperatura: ";
        std::cin >> temperatura;
        
        temperaturas.push_back(temperatura);
        
        std::cout << "Deseja inserir mais uma temperatura? (S/N): ";
        std::cin >> continuar;
    } while (continuar == 'S' || continuar == 's');
}

// Função para calcular a média dos valores do vector
double calcularMedia(const std::vector<double>& temperaturas) {
    if (temperaturas.empty()) {
        return 0.0; // Retorna 0 se o vector estiver vazio para evitar divisão por zero
    }
    
    double soma = 0.0;
    
    for (const double& temperatura : temperaturas) {
        soma += temperatura;
    }
    
    return soma / temperaturas.size();
}

// Função para calcular a soma acumulada dos quadrados das diferenças entre cada elemento e a média
double calcularSomaQuadradosDasDiferencas(const std::vector<double>& temperaturas, double media) {
    double somaQuadrados = 0.0;
    
    for (const double& temperatura : temperaturas) {
        double diferenca = temperatura - media;
        somaQuadrados += diferenca * diferenca;
    }
    
    return somaQuadrados;
}

int main() {
    std::vector<double> temperaturas;
    
    lerTemperaturas(temperaturas);
    
    double media = calcularMedia(temperaturas);
    
    // Subtração de cada elemento pela média e elevação ao quadrado
    double somaQuadradosDasDiferencas = calcularSomaQuadradosDasDiferencas(temperaturas, media);
    
    std::cout << "Soma acumulada dos quadrados das diferenças: " << somaQuadradosDasDiferencas << std::endl;
    
    return 0;
}
