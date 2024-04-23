//receba preco de um produto e seu codigo de origem
//mostre sua procedencia:
    //cd - procedencia
    // 1 - sul
    // 2 - norte
    // 3 - leste
    // 4 - oeste
    // 5 ou 6 - nordeste
    // 7 ou 8 ou 9 - sudeste
    // 10 a 20 - centro oeste
    // 21 a 30 - nordeste

#include <iostream>

using namespace std;

int main() {
    int codigoOrigem;
    float precoProduto;

    // Solicita ao usuário que informe o preço do produto e seu código de origem
    cout << "Informe o preço do produto: ";
    cin >> precoProduto;

    cout << "Informe o código de origem do produto: ";
    cin >> codigoOrigem;

    // Determina a procedência com base no código de origem
    if (codigoOrigem == 1) {
        cout << "Procedência: Sul" << endl;
    } else if (codigoOrigem == 2) {
        cout << "Procedência: Norte" << endl;
    } else if (codigoOrigem == 3) {
        cout << "Procedência: Leste" << endl;
    } else if (codigoOrigem == 4) {
        cout << "Procedência: Oeste" << endl;
    } else if (codigoOrigem == 5 || codigoOrigem == 6) {
        cout << "Procedência: Nordeste" << endl;
    } else if (codigoOrigem == 7 || codigoOrigem == 8 || codigoOrigem == 9) {
        cout << "Procedência: Sudeste" << endl;
    } else if (codigoOrigem >= 10 && codigoOrigem <= 20) {
        cout << "Procedência: Centro-Oeste" << endl;
    } else if (codigoOrigem >= 21 && codigoOrigem <= 30) {
        cout << "Procedência: Nordeste" << endl;
    } else {
        cout << "Código de origem inválido!" << endl;
    }

    return 0;
}