#include <iostream>
using namespace std;

int main() {
    int canal;
    int pessoasAssistindo;
    int totalPessoas = 0;
    int pessoasPorCanal[13] = {0}; // Inicializa o vetor com zeros

    cout << "Digite o número do canal e o número de pessoas assistindo (0 para encerrar):" << endl;

    // Entrada de dados
    while (true) {
        cout << "Canal: ";
        cin >> canal;

        if (canal == 0) {
            break;
        }

        cout << "Pessoas assistindo: ";
        cin >> pessoasAssistindo;

        if (canal >= 4 && canal <= 12) {
            pessoasPorCanal[canal] += pessoasAssistindo;
            totalPessoas += pessoasAssistindo;
        } else {
            cout << "Número de canal inválido. Digite um número entre 4 e 12." << endl;
        }
    }

    // Cálculo e exibição da porcentagem de audiência de cada canal
    cout << "Porcentagem de audiência de cada canal:" << endl;
    for (int i = 4; i <= 12; ++i) {
        if (pessoasPorCanal[i] > 0) {
            double porcentagem = static_cast<double>(pessoasPorCanal[i]) / totalPessoas * 100;
            cout << "Canal " << i << ": " << porcentagem << "%" << endl;
        }
    }

    return 0;
}