//receba o salário atual de um funcionário
//calcule e mostre
    //valor do aumento
    //novo salario
//conforme:
    //<=300,00 = +15%
    //>300 && <600 = 10%
    //>=600 && <=900 = 5%
    //>900 = 0%

#include <iostream>

using namespace std;

int main() {
    float salarioAtual, aumento, novoSalario;

    // Solicita ao usuário que insira o salário atual
    cout << "Informe o salário atual do funcionário: ";
    cin >> salarioAtual;

    // Calcula o aumento e o novo salário conforme as condições especificadas
    if (salarioAtual <= 300.0) {
        aumento = salarioAtual * 0.15; // Aumento de 15%
    } else if (salarioAtual > 300.0 && salarioAtual <= 600.0) {
        aumento = salarioAtual * 0.10; // Aumento de 10%
    } else if (salarioAtual > 600.0 && salarioAtual <= 900.0) {
        aumento = salarioAtual * 0.05; // Aumento de 5%
    } else {
        aumento = 0.0; // Sem aumento
    }

    // Calcula o novo salário
    novoSalario = salarioAtual + aumento;

    // Exibe o valor do aumento e o novo salário
    cout << "O valor do aumento é: " << aumento << endl;
    cout << "O novo salário é: " << novoSalario << endl;

    return 0;
}
 