#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco_carro;
    const double DESCONTO_AVISTA = 0.20;
    const int PARCELAS[] = {6, 12, 18, 24, 30, 36, 42, 48, 54, 60};
    const double PERCENTUAL_ACRESCIMO[] = {0.03, 0.06, 0.09, 0.12, 0.15, 0.18, 0.21, 0.24, 0.27, 0.30};
    int i = 0; // Índice para acessar os arrays PARCELAS e PERCENTUAL_ACRESCIMO

    // Solicita o valor do carro
    cout << "Digite o valor do carro: R$ ";
    cin >> preco_carro;

    // Calcula e mostra os dados para cada quantidade de parcelas usando while
    cout << "\nPreço Final | Parcelas | Valor Parcela" << endl;
    while (i < 10) {
        double preco_final = preco_carro * (1.0 - DESCONTO_AVISTA);
        int parcela = PARCELAS[i];
        double acrescimo = preco_final * PERCENTUAL_ACRESCIMO[i];
        double valor_parcela = (preco_final + acrescimo) / parcela;
        cout << fixed << setprecision(2);
        cout << setw(10) << preco_final << " | ";
        cout << setw(8) << parcela << " | ";
        cout << setw(13) << valor_parcela << endl;
        ++i; // Incrementa o índice
    }

    return 0;
}