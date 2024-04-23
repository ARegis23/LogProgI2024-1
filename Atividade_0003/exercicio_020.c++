//receba a idade e mostre a categoria
    //nao pode nadar <5
    //infatil >=5 && <=7
    //juvenil >=8 && <=10
    //adolescente >=11 && <=15
    //adulto >=16 && <=30
    //senior >30

#include <iostream>

using namespace std;

int main() {
    int idade;

    // Solicita ao usuário que informe a idade
    cout << "Informe a idade: ";
    cin >> idade;

    // Verifica a categoria com base na idade informada
    if (idade < 5) {
        cout << "Não pode nadar" << endl;
    } else if (idade >= 5 && idade <= 7) {
        cout << "Infantil" << endl;
    } else if (idade >= 8 && idade <= 10) {
        cout << "Juvenil" << endl;
    } else if (idade >= 11 && idade <= 15) {
        cout << "Adolescente" << endl;
    } else if (idade >= 16 && idade <= 30) {
        cout << "Adulto" << endl;
    } else {
        cout << "Sênior" << endl;
    }

    return 0;
}