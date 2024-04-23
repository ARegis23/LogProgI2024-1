//calcular e mostrar o salario reajustado de um funcionario
    //até 300 => sal + 35%
    //acima de 300 => sal + 15%


#include <iostream>

using namespace std;

int main() {
    float salario;

    cout << "Informe o salário do funcionário: ";
    cin >> salario;

    if (salario <= 300.0) {
        salario *= 1.35; // Aumento de 35%
    } else {
        salario *= 1.15; // Aumento de 15%
    }

    cout << "O novo salário, com o reajuste, é: " << salario << endl;

    return 0;
}