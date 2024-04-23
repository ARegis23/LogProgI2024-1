#include <iostream>
using namespace std;

int main() {
    int idade;
    float peso;
    int pessoas1a10 = 0, pessoas11a20 = 0, pessoas21a30 = 0, pessoas31eMais = 0;
    float somaPeso1a10 = 0, somaPeso11a20 = 0, somaPeso21a30 = 0, somaPeso31eMais = 0;

    int contador = 0;

    while (contador < 15) {
        cout << "Digite a idade da pessoa " << contador + 1 << ": ";
        cin >> idade;
        cout << "Digite o peso da pessoa " << contador + 1 << ": ";
        cin >> peso;

        if (idade >= 1 && idade <= 10) {
            somaPeso1a10 += peso;
            pessoas1a10++;
        } else if (idade >= 11 && idade <= 20) {
            somaPeso11a20 += peso;
            pessoas11a20++;
        } else if (idade >= 21 && idade <= 30) {
            somaPeso21a30 += peso;
            pessoas21a30++;
        } else {
            somaPeso31eMais += peso;
            pessoas31eMais++;
        }

        contador++;
    }

    cout << "Média dos pesos das pessoas de 1 a 10 anos: " << (pessoas1a10 == 0 ? 0 : somaPeso1a10 / pessoas1a10) << endl;
    cout << "Média dos pesos das pessoas de 11 a 20 anos: " << (pessoas11a20 == 0 ? 0 : somaPeso11a20 / pessoas11a20) << endl;
    cout << "Média dos pesos das pessoas de 21 a 30 anos: " << (pessoas21a30 == 0 ? 0 : somaPeso21a30 / pessoas21a30) << endl;
    cout << "Média dos pesos das pessoas com 31 anos ou mais: " << (pessoas31eMais == 0 ? 0 : somaPeso31eMais / pessoas31eMais) << endl;

    return 0;
}