#include <iostream>
using namespace std;

int main() {
    char codigo;
    float valor, total_vista = 0, total_prazo = 0, total_compras = 0, primeira_prestacao = 0;
    int contador = 0;

    while (contador < 15) {
        cout << "Digite o código da transação (V para à vista, P para a prazo): ";
        cin >> codigo;

        cout << "Digite o valor da transação: ";
        cin >> valor;

        // Atualiza os totais de acordo com o código da transação
        if (codigo == 'V') {
            total_vista += valor;
        } else if (codigo == 'P') {
            total_prazo += valor;
        }

        total_compras += valor;

        // Calcula a primeira prestação apenas se a transação for a prazo
        if (codigo == 'P' && primeira_prestacao == 0) {
            primeira_prestacao = valor / 3;
        }

        contador++;
    }

    // Mostra os resultados
    cout << "Valor total das compras à vista: R$" << total_vista << endl;
    cout << "Valor total das compras a prazo: R$" << total_prazo << endl;
    cout << "Valor total das compras efetuadas: R$" << total_compras << endl;
    cout << "Valor da primeira prestação das compras a prazo: R$" << primeira_prestacao << endl;

    return 0;
}