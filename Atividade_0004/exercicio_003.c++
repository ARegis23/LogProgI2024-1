#include <iostream>
using namespace std;

int main() {
    // Inicializando as variáveis para contar o número de pessoas em cada faixa etária
    int faixaEtaria1 = 0, faixaEtaria2 = 0, faixaEtaria3 = 0, faixaEtaria4 = 0, faixaEtaria5 = 0;

    // Inicializando o contador
    int contador = 1;

    // Recebendo as idades das oito pessoas usando um loop while
    while (contador <= 8) {
        int idade;
        cout << "Informe a idade da " << contador << "a pessoa: ";
        cin >> idade;

        // Determinando a faixa etária da pessoa e atualizando as variáveis correspondentes
        if (idade <= 15) {
            faixaEtaria1++;
        } else if (idade <= 30) {
            faixaEtaria2++;
        } else if (idade <= 45) {
            faixaEtaria3++;
        } else if (idade <= 60) {
            faixaEtaria4++;
        } else {
            faixaEtaria5++;
        }

        // Incrementando o contador
        contador++;
    }

    // Calculando a quantidade total de pessoas
    int totalPessoas = faixaEtaria1 + faixaEtaria2 + faixaEtaria3 + faixaEtaria4 + faixaEtaria5;

    // Exibindo a quantidade de pessoas em cada faixa etária
    cout << "\nQuantidade de pessoas em cada faixa etária:" << endl;
    cout << "Faixa Etária 1 (até 15 anos): " << faixaEtaria1 << " pessoa(s)" << endl;
    cout << "Faixa Etária 2 (16 a 30 anos): " << faixaEtaria2 << " pessoa(s)" << endl;
    cout << "Faixa Etária 3 (31 a 45 anos): " << faixaEtaria3 << " pessoa(s)" << endl;
    cout << "Faixa Etária 4 (46 a 60 anos): " << faixaEtaria4 << " pessoa(s)" << endl;
    cout << "Faixa Etária 5 (acima de 60 anos): " << faixaEtaria5 << " pessoa(s)" << endl;

    // Calculando a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas
    double porcentagemFaixaEtaria1 = (static_cast<double>(faixaEtaria1) / totalPessoas) * 100;

    // Calculando a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
    double porcentagemFaixaEtaria5 = (static_cast<double>(faixaEtaria5) / totalPessoas) * 100;

    // Exibindo as porcentagens
    cout << "\nPorcentagem de pessoas na primeira faixa etária com relação ao total de pessoas: " << porcentagemFaixaEtaria1 << "%" << endl;
    cout << "Porcentagem de pessoas na última faixa etária com relação ao total de pessoas: " << porcentagemFaixaEtaria5 << "%" << endl;

    return 0;
}