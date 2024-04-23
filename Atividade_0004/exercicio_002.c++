#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Variáveis para armazenar os dados iniciais
    const int ingressosIniciais = 120;
    const double precoInicial = 5.00;
    const double despesas = 200.00;
    const double aumentoVendas = 26;
    const double reducaoPreco = 0.50;

    // Variáveis para armazenar os dados durante o cálculo
    double preco = precoInicial;
    double lucroMaximo = 0;
    double precoLucroMaximo = 0;
    int ingressosLucroMaximo = 0;

    // Título da tabela
    cout << "Preço do Ingresso | Ingressos Vendidos | Lucro Esperado" << endl;

    // Loop para calcular o lucro esperado para cada preço do ingresso
    while (preco >= 1.00) {
        // Calcula a quantidade de ingressos vendidos para o preço atual
        int ingressos = ingressosIniciais + ((precoInicial - preco) / reducaoPreco) * aumentoVendas;

        // Calcula o lucro esperado para o preço atual
        double lucro = (preco * ingressos) - despesas;

        // Verifica se o lucro atual é maior que o lucro máximo encontrado até agora
        if (lucro > lucroMaximo) {
            lucroMaximo = lucro;
            precoLucroMaximo = preco;
            ingressosLucroMaximo = ingressos;
        }

        // Exibe o preço do ingresso, a quantidade de ingressos vendidos e o lucro esperado
        cout << fixed << setprecision(2);
        cout << setw(16) << preco << " | ";
        cout << setw(18) << ingressos << " | ";
        cout << setw(15) << lucro << endl;

        // Reduz o preço do ingresso para o próximo cálculo
        preco -= reducaoPreco;
    }

    // Exibe o lucro máximo esperado e as informações correspondentes
    cout << "---------------------------------------------" << endl;
    cout << "Lucro Máximo Esperado: R$" << lucroMaximo << endl;
    cout << "Preço do Ingresso para o Lucro Máximo: R$" << precoLucroMaximo << endl;
    cout << "Quantidade de Ingressos Vendidos para o Lucro Máximo: " << ingressosLucroMaximo << endl;

    return 0;
}