#include <iostream>
using namespace std;

int main() {
    int opcao;
    double salario, novoSalario, decimoTerceiro, valorFerias;
    int mesesTrabalhados;

    cout << "Menu de opções:\n";
    cout << "1. Novo salário\n";
    cout << "2. Férias\n";
    cout << "3. Décimo terceiro\n";
    cout << "4. Sair\n";
    cout << "Digite a opção desejada: ";
    cin >> opcao;

    while (opcao != 4) {
        switch (opcao) {
            case 1:
                cout << "Digite o salário do funcionário: ";
                cin >> salario;
                if (salario <= 210.0) {
                    novoSalario = salario * 1.15;
                } else if (salario <= 600.0) {
                    novoSalario = salario * 1.10;
                } else {
                    novoSalario = salario * 1.05;
                }
                cout << "O novo salário é: " << novoSalario << endl;
                break;

            case 2:
                cout << "Digite o salário do funcionário: ";
                cin >> salario;
                valorFerias = salario + (salario / 3.0);
                cout << "O valor das férias é: " << valorFerias << endl;
                break;

            case 3:
                cout << "Digite o salário do funcionário: ";
                cin >> salario;
                cout << "Digite o número de meses trabalhados (até 12): ";
                cin >> mesesTrabalhados;
                decimoTerceiro = (salario * mesesTrabalhados) / 12.0;
                cout << "O valor do décimo terceiro é: " << decimoTerceiro << endl;
                break;

            default:
                cout << "Opção inválida! Digite novamente." << endl;
                break;
        }

        cout << "\nDigite a opção desejada: ";
        cin >> opcao;
    }

    cout << "Programa encerrado." << endl;

    return 0;
}