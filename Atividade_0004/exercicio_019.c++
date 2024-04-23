#include <iostream>
using namespace std;

int main() {
    char tipoAcao;
    double precoCompra, precoVenda;
    double lucro, lucroTotal = 0;
    int qtdLucroSuperior1000 = 0, qtdLucroInferior200 = 0;

    cout << "Digite o tipo da ação (ou 'F' para finalizar): ";
    cin >> tipoAcao;

    // Loop enquanto o tipo de ação não for 'F'
    while (tipoAcao != 'F') {
        cout << "Digite o preço de compra da ação: ";
        cin >> precoCompra;

        cout << "Digite o preço de venda da ação: ";
        cin >> precoVenda;

        // Calcula o lucro da ação
        lucro = precoVenda - precoCompra;

        // Atualiza o lucro total da empresa
        lucroTotal += lucro;

        // Verifica se o lucro é superior a R$ 1.000,00
        if (lucro > 1000.00) {
            qtdLucroSuperior1000++;
        }

        // Verifica se o lucro é inferior a R$ 200,00
        if (lucro < 200.00) {
            qtdLucroInferior200++;
        }

        // Mostra o lucro da ação
        cout << "Lucro da ação: R$" << lucro << endl;

        // Pede o próximo tipo de ação
        cout << "Digite o tipo da próxima ação (ou 'F' para finalizar): ";
        cin >> tipoAcao;
    }

    // Mostra os resultados finais
    cout << "Quantidade de ações com lucro superior a R$ 1.000,00: " << qtdLucroSuperior1000 << endl;
    cout << "Quantidade de ações com lucro inferior a R$ 200,00: " << qtdLucroInferior200 << endl;
    cout << "Lucro total da empresa: R$" << lucroTotal << endl;

    return 0;
}