//receba altura e sexo
//calcule e mostre o peso ideal
    //para h: (72.7*altura)-58
    //para m: (62.1*altura)-47.7

#include <iostream>

using namespace std;

int main() {
    char sexo;
    float altura, pesoIdeal;

    // Solicita ao usuário que informe o sexo
    cout << "Informe o sexo (M para masculino, F para feminino): ";
    cin >> sexo;

    // Solicita ao usuário que informe a altura
    cout << "Informe a altura em metros: ";
    cin >> altura;

    // Calcula o peso ideal com base no sexo e na altura
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 47.7;
    } else {
        cout << "Sexo inválido!" << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Exibe o peso ideal
    cout << "O peso ideal é: " << pesoIdeal << " kg" << endl;

    return 0;
}