#include <iostream>
using namespace std;

int main() {
    int contador = 0, total_pessoas_10_30 = 0, pessoas_90kg_150altura = 0;
    float idade, peso, altura, soma_idades = 0;

    while (contador < 10) {
        cout << "Digite a idade da pessoa " << contador + 1 << ": ";
        cin >> idade;

        cout << "Digite o peso da pessoa " << contador + 1 << " (em kg): ";
        cin >> peso;

        cout << "Digite a altura da pessoa " << contador + 1 << " (em metros): ";
        cin >> altura;

        // Calcula a média das idades das dez pessoas
        soma_idades += idade;

        // Verifica a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metros
        if (peso > 90 && altura < 1.50) {
            pessoas_90kg_150altura++;
        }

        // Verifica a quantidade de pessoas com idade entre 10 e 30 anos e altura superior a 1,90 metros
        if (idade >= 10 && idade <= 30 && altura > 1.90) {
            total_pessoas_10_30++;
        }

        contador++;
    }

    // Calcula a média das idades das dez pessoas
    float media_idades = soma_idades / 10;

    // Calcula a porcentagem de pessoas com idade entre 10 e 30 anos e altura superior a 1,90 metros
    float porcentagem_pessoas_10_30 = (total_pessoas_10_30 / 10.0) * 100;

    // Mostra os resultados
    cout << "Média das idades das dez pessoas: " << media_idades << " anos" << endl;
    cout << "Quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro: " << pessoas_90kg_150altura << endl;
    cout << "Porcentagem de pessoas com idade entre 10 e 30 anos e altura superior a 1,90 metros: " << porcentagem_pessoas_10_30 << "%" << endl;

    return 0;
}