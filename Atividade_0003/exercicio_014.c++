//receba o salario de um funcionario
//calcule e mostre novo salario
    //+50% => <=300
    //+40% => >300 && <=500
    //+30% => >500 && <=700
    //+20% => >700 && <=800
    //+10% => >800 && <=1000
    //+5% => >1000

#include <iostream>

using namespace std;

int main() {
    float salarioAtual, novoSalario;

    // Solicita ao usuário que informe o salário atual do funcionário
    cout << "Informe o salário atual do funcionário: ";
    cin >> salarioAtual;

    // Calcula o novo salário com base no salário atual
    if (salarioAtual <= 300.0) {
        novoSalario = salarioAtual * 1.50; // Aumento de 50%
    } else if (salarioAtual > 300.0 && salarioAtual <= 500.0) {
        novoSalario = salarioAtual * 1.40; // Aumento de 40%
    } else if (salarioAtual > 500.0 && salarioAtual <= 700.0) {
        novoSalario = salarioAtual * 1.30; // Aumento de 30%
    } else if (salarioAtual > 700.0 && salarioAtual <= 800.0) {
        novoSalario = salarioAtual * 1.20; // Aumento de 20%
    } else if (salarioAtual > 800.0 && salarioAtual <= 1000.0) {
        novoSalario = salarioAtual * 1.10; // Aumento de 10%
    } else {
        novoSalario = salarioAtual * 1.05; // Aumento de 5%
    }

    // Exibe o novo salário
    cout << "O novo salário do funcionário é: " << novoSalario << endl;

    return 0;
}
