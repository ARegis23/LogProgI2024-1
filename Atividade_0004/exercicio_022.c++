#include <iostream>
using namespace std;

int main() {
    int idade, cont = 0;
    double altura, somaAlturas = 0.0;

    cout << "Digite a idade e a altura das pessoas (para encerrar, digite uma idade menor ou igual a zero):\n";

    // Loop para receber idade e altura até que seja digitada uma idade menor ou igual a zero
    while (true) {
        cout << "Idade: ";
        cin >> idade;

        if (idade <= 0) {
            // Condição de saída do loop
            break;
        }

        cout << "Altura: ";
        cin >> altura;

        if (idade > 50) {
            // Se a pessoa tem mais de 50 anos, soma sua altura e incrementa o contador
            somaAlturas += altura;
            cont++;
        }
    }

    if (cont > 0) {
        // Se houve pelo menos uma pessoa com mais de 50 anos, calcula e mostra a média das alturas
        double mediaAlturas = somaAlturas / cont;
        cout << "A média das alturas das pessoas com mais de 50 anos é: " << mediaAlturas << " metros" << endl;
    } else {
        // Caso contrário, mostra uma mensagem informando que não há dados suficientes para calcular a média
        cout << "Não há pessoas com mais de 50 anos para calcular a média das alturas." << endl;
    }

    return 0;
}