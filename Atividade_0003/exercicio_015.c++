//receba o tipo de investimento
//calcule e mostre valor apos 1 mes
    //tp 1 / poupanca / RM 3%
    //tp 2 / fundos renda fixa / RM 4%

#include <iostream>

using namespace std;

int main() {
    int tipoInvestimento;
    float valorInvestido, valorApos1Mes;

    // Solicita ao usuário que informe o tipo de investimento
    cout << "Informe o tipo de investimento (1 - Poupança, 2 - Fundos de renda fixa): ";
    cin >> tipoInvestimento;

    // Solicita ao usuário que informe o valor investido
    cout << "Informe o valor investido: ";
    cin >> valorInvestido;

    // Calcula o valor após 1 mês de investimento com base no tipo de investimento
    if (tipoInvestimento == 1) {
        // Poupança (rendimento mensal de 3%)
        valorApos1Mes = valorInvestido * 1.03; // Aumento de 3%
    } else if (tipoInvestimento == 2) {
        // Fundos de renda fixa (rendimento mensal de 4%)
        valorApos1Mes = valorInvestido * 1.04; // Aumento de 4%
    } else {
        // Tipo de investimento inválido
        cout << "Tipo de investimento inválido!" << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Exibe o valor após 1 mês de investimento
    cout << "O valor após 1 mês de investimento é: " << valorApos1Mes << endl;

    return 0;
}