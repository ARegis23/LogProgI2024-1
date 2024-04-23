#include <iostream>
using namespace std;

int main() {
    int codigoCliente, tipoInvestimento;
    float valorInvestido, rendimentoMensal, totalInvestido = 0, totalJuros = 0;

    cout << "Digite o codigo do cliente, o tipo do investimento e o valor investido (Digite um codigo <= 0 para encerrar):\n";

    cin >> codigoCliente;

    while (codigoCliente > 0) {
        cin >> tipoInvestimento >> valorInvestido;

        switch (tipoInvestimento) {
            case 1:
                rendimentoMensal = valorInvestido * 0.015; // 1.5%
                break;
            case 2:
                rendimentoMensal = valorInvestido * 0.02; // 2%
                break;
            case 3:
                rendimentoMensal = valorInvestido * 0.04; // 4%
                break;
            default:
                cout << "Tipo de investimento invalido!\n";
                rendimentoMensal = 0; // Não há rendimento para tipos inválidos
        }

        totalInvestido += valorInvestido;
        totalJuros += rendimentoMensal;

        cout << "Rendimento mensal para o cliente " << codigoCliente << ": R$" << rendimentoMensal << endl;
        cout << "Digite o proximo codigo do cliente, o tipo do investimento e o valor investido: ";
        cin >> codigoCliente;
    }

    cout << "\nTotal investido: R$" << totalInvestido << endl;
    cout << "Total de juros pagos: R$" << totalJuros << endl;

    return 0;
}