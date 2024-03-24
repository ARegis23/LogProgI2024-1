//Um funcinário recebe um salário fixo mais 4% de comissão sobre as vendas.
//Faça um programa que receba o salário fixo do funcionário
//e o valor de suas vendas;
//calcule e mostre a comissão e seu salário final

#include <iostream>

using namespace std;

//Função

float salario (float a, float b){
    return (a + (b*0.04));
}

//Processamento
int main (){
    float a, b, result;

        cout << "-------------------------------------" << endl;
        cout << " Salário: " << endl;
        cout << "-------------------------------------" << endl;

    cout << "Digite o salário fixo do funcionário: ";
    cin >> a;

    cout << "Digite o valor de suas vendas do período: ";
    cin >> b;

    result = salario(a,b);

    cout << "-------------------------------------" << endl;
    cout << "O salário final é $" << result << endl;
    cout << "Sendo $" << (b*0.04) << " o valor da comissão." << endl;;
    cout << "-------------------------------------" << endl;


    return 0;
}