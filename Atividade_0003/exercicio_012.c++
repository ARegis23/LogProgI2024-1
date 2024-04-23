//receba o salario bruto de um funcionario
//calcule e mostre o valor a receber
//salf=(salbruto+gratificao) - 7%
    //< = + 100
    //> 350 && < 600 = + 75
    //>= 600 && <= 900 = + 50
    //>900 = + 35

#include <iostream>

using namespace std;

int main() {
    float salarioBruto, gratificacao, salarioFinal;

    // Solicita ao usuário que informe o salário bruto e a gratificação
    cout << "Informe o salário bruto do funcionário: ";
    cin >> salarioBruto;

    // Adiciona o bônus ao valor a receber de acordo com as condições especificadas
    if (salarioBruto <= 350.0) {
        gratificacao = 100.0;
    } else if (salarioBruto > 350.0 && salarioBruto < 600.0) {
        gratificacao = 75.0;
    } else if (salarioBruto >= 600.0 && salarioBruto <= 900.0) {
        gratificacao = 50.0;
    } else {
        gratificacao = 35.0;
    }

    // Calcula o valor a receber com base no salário bruto e na gratificação
    salarioFinal = (salarioBruto + gratificacao) * 0.93; // Desconto de 7%

    // Exibe o valor a receber
    cout << "O valor a receber é: " << salarioFinal << endl;

    return 0;
}
