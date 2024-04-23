#include <iostream>
using namespace std;

int main() {
    int idade, contador = 0, pessoas_acima_50 = 0, total_pessoas = 0, pessoas_10_20 = 0;
    float altura, peso, soma_alturas_10_20 = 0;
    float porcentagem_peso_menor_40;

    while (contador < 5) {
        cout << "Digite a idade da pessoa " << contador + 1 << ": ";
        cin >> idade;

        cout << "Digite a altura da pessoa " << contador + 1 << " (em metros): ";
        cin >> altura;

        cout << "Digite o peso da pessoa " << contador + 1 << " (em kg): ";
        cin >> peso;

        // Verifica se a idade é superior a 50 anos
        if (idade > 50) {
            pessoas_acima_50++;
        }

        // Calcula a média das alturas das pessoas com idade entre 10 e 20 anos
        if (idade >= 10 && idade <= 20) {
            soma_alturas_10_20 += altura;
            pessoas_10_20++;
        }

        // Verifica se o peso é inferior a 40 kg
        if (peso < 40) {
            total_pessoas++;
        }

        contador++;
    }

    // Calcula a média das alturas das pessoas com idade entre 10 e 20 anos
    float media_alturas_10_20 = pessoas_10_20 > 0 ? soma_alturas_10_20 / pessoas_10_20 : 0;

    // Calcula a porcentagem de pessoas com peso inferior a 40 kg
    porcentagem_peso_menor_40 = (total_pessoas / 5.0) * 100;

    // Mostra os resultados
    cout << "Quantidade de pessoas com idade superior a 50 anos: " << pessoas_acima_50 << endl;
    cout << "Média das alturas das pessoas com idade entre 10 e 20 anos: " << media_alturas_10_20 << " metros" << endl;
    cout << "Porcentagem de pessoas com peso inferior a 40 kg: " << porcentagem_peso_menor_40 << "%" << endl;

    return 0;
}