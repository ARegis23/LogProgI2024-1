#include <iostream>
using namespace std;

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int contador = 0; // Inicializa o contador de números primos
    int numero;
    int digitados = 0; // Contador de números digitados

    // Solicita e verifica os números enquanto ainda não foram digitados 10 números
    while (digitados < 10) {
        cout << "Digite um número inteiro: ";
        cin >> numero;

        if (ehPrimo(numero)) {
            contador++; // Se o número for primo, incrementa o contador
        }

        digitados++; // Incrementa o contador de números digitados
    }

    cout << "A quantidade de números primos digitados é: " << contador << endl;

    return 0;
}