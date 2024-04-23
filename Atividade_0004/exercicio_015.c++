#include <iostream>
using namespace std;

int main() {
    char sexo, resposta;
    int contador = 0;
    int qtdeSim = 0;
    int qtdeNao = 0;
    int qtdeMulheresSim = 0;
    int qtdeHomens = 0;
    int qtdeHomensNao = 0;

    while (contador < 10) {
        cout << "Digite o sexo do entrevistado (M/F): ";
        cin >> sexo;

        cout << "Digite a resposta do entrevistado (S/N): ";
        cin >> resposta;

        if (resposta == 'S') {
            qtdeSim++;
            if (sexo == 'F') {
                qtdeMulheresSim++;
            }
        } else if (resposta == 'N') {
            qtdeNao++;
            if (sexo == 'M') {
                qtdeHomensNao++;
                qtdeHomens++;
            } else {
                qtdeHomens++;
            }
        }

        contador++;
    }

    float percentualHomensNao = 0;
    if (qtdeHomens > 0) {
        percentualHomensNao = (static_cast<float>(qtdeHomensNao) / qtdeHomens) * 100;
    }

    cout << "Número de pessoas que responderam sim: " << qtdeSim << endl;
    cout << "Número de pessoas que responderam não: " << qtdeNao << endl;
    cout << "Número de mulheres que responderam sim: " << qtdeMulheresSim << endl;
    cout << "Percentagem de homens que responderam não: " << percentualHomensNao << "%" << endl;

    return 0;
}