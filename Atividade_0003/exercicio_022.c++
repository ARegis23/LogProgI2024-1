//receba a idade e o peso de uma pessoa
// mostre qual grupo de risco ela se encaixa:
    // idade                    peso (GrupodeRisco)  
    //                 ate 60  entre 60 e 90 acima de 90
    // <20              (9)         (8)         (7)
    // 20 a 50          (6)         (5)         (4)
    // >50              (3)         (2)         (1)

#include <iostream>

using namespace std;

int main() {
    int idade;
    float peso;

    // Solicita ao usuário que informe a idade e o peso da pessoa
    cout << "Informe a idade da pessoa: ";
    cin >> idade;

    cout << "Informe o peso da pessoa: ";
    cin >> peso;

    // Determina o grupo de risco com base na idade e no peso da pessoa
    int grupoRisco;
    if (idade < 20) {
        if (peso <= 60) {
            grupoRisco = 9;
        } else if (peso <= 90) {
            grupoRisco = 8;
        } else {
            grupoRisco = 7;
        }
    } else if (idade >= 20 && idade <= 50) {
        if (peso <= 60) {
            grupoRisco = 6;
        } else if (peso <= 90) {
            grupoRisco = 5;
        } else {
            grupoRisco = 4;
        }
    } else {
        if (peso <= 60) {
            grupoRisco = 3;
        } else if (peso <= 90) {
            grupoRisco = 2;
        } else {
            grupoRisco = 1;
        }
    }

    // Exibe o grupo de risco correspondente
    cout << "Grupo de risco: " << grupoRisco << endl;

    return 0;
}