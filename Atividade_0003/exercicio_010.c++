//PF = custofabrica+%distribuidor(CF)+%impostos(CF)
//Receba o custo de fabrica e mostre o preço ao consumidor
    //CF < 12k => %Dist = 5 %Ip = 0
    //CF >=12k && <25k => %Dist = 10 %Ip = 15
    //CF >=25k => %Dist = 15 %Ip = 20

#include <iostream>

using namespace std;

int main() {
    float custoFabrica, precoFinal;
    float percentualDistribuidor, percentualImpostos;

    cout << "Informe o custo de fábrica do veículo: ";
    cin >> custoFabrica;

    // Verifica o custo de fábrica e define os percentuais de distribuidor e impostos
    if (custoFabrica < 12000.0) {
        percentualDistribuidor = 0.05;
        percentualImpostos = 0.0;
    } else if (custoFabrica >= 12000.0 && custoFabrica < 25000.0) {
        percentualDistribuidor = 0.1;
        percentualImpostos = 0.15;
    } else {
        percentualDistribuidor = 0.15;
        percentualImpostos = 0.20;
    }

    // Calcula o preço final ao consumidor
    precoFinal = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);

    cout << "O preço final ao consumidor é: " << precoFinal << endl;

    return 0;
}
