//aumento de 30% aos funcionarios
    //cujo salario <500,00
//faça programa que receba
    //salario do funcionario
    //mostre o salario reajustado
    //ou msg se não tiver direito

#include <iostream>

using namespace std;

int main() {
    float salario;

    cout << "Informe o salário do funcionário: ";
    cin >> salario;

    if (salario < 500.0) {
        salario *= 1.3;
        cout << "O novo salário, com o reajuste de 30%, é: " << salario << endl;
    } else {
        cout << "O funcionário não tem direito a aumento." << endl;
    }

    return 0;
}
