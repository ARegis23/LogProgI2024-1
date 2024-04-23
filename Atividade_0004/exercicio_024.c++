#include <iostream>
using namespace std;

int main() {
    int valor, maior, menor;

    cout << "Digite um conjunto de valores inteiros e positivos (digite 0 para encerrar):\n";

    // Inicialize o maior e o menor com o primeiro valor válido
    cin >> valor;
    maior = menor = valor;

    while (valor != 0) {
        if (valor < 0) {
            cout << "Valor inválido! Por favor, digite apenas valores positivos.\n";
        } else {
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }

        cin >> valor; // Receba o próximo valor
    }

    // Verifique se algum valor válido foi inserido
    if (maior == menor && maior == 0) {
        cout << "Nenhum valor positivo foi inserido.\n";
    } else {
        cout << "O maior valor do conjunto é: " << maior << endl;
        cout << "O menor valor do conjunto é: " << menor << endl;
    }

    return 0;
}