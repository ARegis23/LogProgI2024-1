//receba a idade e informe
    //maior idade ou nao

#include <iostream>

using namespace std;

int main() {
    int idade;

    // Solicita ao usuário que informe a idade
    cout << "Informe a idade: ";
    cin >> idade;

    // Verifica se a idade é maior ou igual a 18
    if (idade >= 18) {
        cout << "Maior de idade" << endl;
    } else {
        cout << "Menor de idade" << endl;
    }

    return 0;
}