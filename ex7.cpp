#include <iostream>

// Função para calcular o fatorial de um número
int fatorial(int x) {
    if (x <= 1) {
        return 1;
    } else {
        return x * fatorial(x - 1);
    }
}

// Função para calcular o arranjo de n itens tomados p a p
int arranjo(int n, int p) {
    if (n < p) {
        std::cout << "Erro: n deve ser maior ou igual a p." << std::endl;
        return 0; // Retornamos 0 em caso de erro
    }

    return fatorial(n) / fatorial(n - p);
}

// Função para calcular a combinação de n itens tomados p a p
int combinacao(int n, int p) {
    if (n < p) {
        std::cout << "Erro: n deve ser maior ou igual a p." << std::endl;
        return 0; // Retornamos 0 em caso de erro
    }

    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

int main() {
    int n, p;

    std::cout << "Digite o valor de n: ";
    std::cin >> n;
    std::cout << "Digite o valor de p: ";
    std::cin >> p;

    int arranjoResultado = arranjo(n, p);
    int combinacaoResultado = combinacao(n, p);

    if (arranjoResultado != 0) {
        std::cout << "Arranjo de " << n << " itens tomados " << p << " a " << p << ": " << arranjoResultado << std::endl;
    }

    if (combinacaoResultado != 0) {
        std::cout << "Combinação de " << n << " itens tomados " << p << " a " << p << ": " << combinacaoResultado << std::endl;
    }

    return 0;
}
