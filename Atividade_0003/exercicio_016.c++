//receba o preco atual de um produto e seu codigo
//calcule e mostre
    //o valor do desconto
        //0% => <30
        //10% => >=30 && <100
        //15% => >=100
    //novo preco

#include <iostream>

using namespace std;

int main() {
    int codigoProduto;
    float precoAtual, valorDesconto, novoPreco;

    // Solicita ao usuário que informe o código do produto e seu preço atual
    cout << "Informe o código do produto: ";
    cin >> codigoProduto;

    cout << "Informe o preço atual do produto: ";
    cin >> precoAtual;

    // Calcula o valor do desconto e o novo preço com base no preço atual e no código do produto
    if (precoAtual < 30.0) {
        valorDesconto = 0.0;
    } else if (precoAtual >= 30.0 && precoAtual < 100.0) {
        valorDesconto = precoAtual * 0.10; // Desconto de 10%
    } else {
        valorDesconto = precoAtual * 0.15; // Desconto de 15%
    }

    novoPreco = precoAtual - valorDesconto;

    // Exibe o valor do desconto e o novo preço do produto
    cout << "O valor do desconto é: " << valorDesconto << endl;
    cout << "O novo preço do produto é: " << novoPreco << endl;

    return 0;
}