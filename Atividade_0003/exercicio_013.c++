//receba o preco de um produto
//calcule e mostre:
    //novo preco:
    //+5% <50
    //+10% >=50 && <=100
    //+15% >100
        //calssificacao:
        //novopreco <80 => barato
        //novopreco <=80 && >=120 => normal
        //novopreco >120 && >=200 => caro
        //novopreco >200 => muito caro

#include <iostream>

using namespace std;

int main() {
    float precoProduto, novoPreco;
    string classificacao;

    // Solicita ao usuário que informe o preço do produto
    cout << "Informe o preço do produto: ";
    cin >> precoProduto;

    // Calcula o novo preço com base no preço atual
    if (precoProduto < 50.0) {
        novoPreco = precoProduto * 1.05; // Aumento de 5%
    } else if (precoProduto >= 50.0 && precoProduto <= 100.0) {
        novoPreco = precoProduto * 1.10; // Aumento de 10%
    } else {
        novoPreco = precoProduto * 1.15; // Aumento de 15%
    }

    // Determina a classificação do produto com base no novo preço
    if (novoPreco < 80.0) {
        classificacao = "Barato";
    } else if (novoPreco >= 80.0 && novoPreco <= 120.0) {
        classificacao = "Normal";
    } else if (novoPreco > 120.0 && novoPreco <= 200.0) {
        classificacao = "Caro";
    } else {
        classificacao = "Muito caro";
    }

    // Exibe o novo preço e a classificação do produto
    cout << "O novo preço do produto é: " << novoPreco << endl;
    cout << "Classificação do produto: " << classificacao << endl;

return 0;
}
